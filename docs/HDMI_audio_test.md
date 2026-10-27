# HDMI 声音测试与推荐板卡参考核对

日期：2026-10-27。硬件：DMZ_EG4S20 综合底板 + 用户的爱国者 M156-D057；目标从扩展屏内置喇叭听音。

结论：用户已明确反馈“能听到声音”，基础 HDMI 音频实板验收通过。当前测试版本默认连续发声，并保留 TF 卡 BMP 显示。长时间稳定性、WAV 文件播放及音画调度尚未验收。

后续更新：本页记录的是历史 `audio_test` 版本。当前板上已切换为默认静音的统一工程 `build_system/dmz_track1.al`，其新命令链路M/U及三次R重新加载已实板通过。使用 `scripts/project.ps1 -Action Mute/Tone/Reload`，见 `BASELINE_ACCEPTANCE.md`；旧脚本问题的唯一根因未证实，不继续作为使用入口。

## 参考资料是否有用
有用。已检查推荐 HX4S20C 板卡的 `lab_ex5_i2s/设计参考例程文档.md`、`代码说明.md`、当前 `top_tf_hdmi_audio.v`、`hdmi_audio_tone_i2s_64fs.v`、`I2S_receiver.v`、`audio_arc_calculate.v` 和 `APUG092_HDMI1.4b_Transmitter_V1.0.docx`。

- 当前参考顶层实际实例化 I2S 测试音发生器和 I2S 接收器，再将 PCM 和采样使能送入 HDMI IP。
- 同目录有 `hdmi_audio_tone_pcm_scale.v`，但它不是当前顶层的活动音频实例。此前检查时曾混淆，已经以当前顶层代码更正。
- HDMI 发射器的音频与 ACR 输入工作在像素时钟域；需要同步有效的左右声道 PCM，而不是直接把 I2S 串行数据接入 TMDS。
- 48 kHz、ACR N=6144；每48次采样更新 CTS。25 MHz 像素时钟下稳态 CTS=25000。
- 自编版本直接在像素域生成 PCM，因此无需先编码 I2S 再接收回来；现有参数与参考例程一致。
- 推荐板使用特定 HDMI_B 引脚与 DDC/EDID，DMZ 综合底板 DDC/HPD 未连 FPGA，因此不直接照搬引脚或 EDID 控制。
- 参考 HDMI 协议核为安路加密 IP；本次仍使用已验证的 hdl-util/hdmi 适配核，并增加可观测计数。没有把参考加密核冒充自主编写逻辑。

## 测试版本
工程 `build_audio_test/dmz_audio_test.al`，顶层 `rtl/audio_test/dmz_av_test_top.sv`。
保留 TF 卡 BMP 显示、SDRAM 自检和画面缓冲，增加 48 kHz/16位/双声道 1 kHz 正弦测试音，峰值约8190（约-12 dBFS）。

- SW0 高：运行，低：复位。
- 新版默认自动发声，不依赖 SW1。LED3 仅显示 SW1 原始状态，不能单独判断软件模式是否发声。
- 实验性串口命令 U=连续音、M=静音、B=1秒声/1秒静音、S=恢复拨码控制。仅 S 模式下 SW1高静音、SW2高连续音。在线命令实板验证未通过，暂不作为使用入口，详见末节。
- LED5 亮表示当前正在发送有声采样。
- 状态 UART 在25MHz像素域发送，115200/8N1；每约0.5秒一帧 AVST 诊断包。

```powershell
./scripts/build_audio_test.ps1
& D:/ANLU/bin/td_commands_prompt.exe scripts/download_audio_test.tcl
./scripts/read_audio_status.ps1 -Port COM3 -Seconds 8
```
仅 SRAM 下载；静音图片版 P3 的已有位流保留，可以用 `scripts/download_p3.tcl` 恢复。
串口号可能随 USB 连接变化；本轮结束检查时 CH340 为 COM3，早先记录中的 COM8 是当时的枚举值。

## 已确认的证据
- HDMI 协议仿真回归通过：PCM位对齐/奇偶校验、信息帧校验和、头/子包BCH、ACR N/CTS、串行符号、静音与复位恢复。
- 最终布线建立裕量 +0.485ns、保持裕量 +0.041ns，STA覆盖99.99%。
- 已完成SRAM下载，BMP画面恢复，SDRAM自检通过，显示欠载为0。
- 首轮实板读取明确显示 SW1=高、tone_muted=true，PCM包持续发送但首个采样非零包计数为0；这次静音有直接开关状态证据。
- 同时音频采样和包计数持续增长，N/CTS=6144/25000。不能把这些计数等同于喇叭已发声。
- 用户不熟悉拨码操作，因此测试版本改为默认自动发声；原始开关状态与实际静音状态分别报告。用户随后确认从扩展屏内置喇叭听到声音，无需拨动 SW1。
- `audio_final_status.json` 保存首次恢复下载后的状态；`audio_verified_status.json` 保存本轮重新下载后的检查。音频非零包持续增加，N/CTS=6144/25000，图片307200像素，SDRAM自检8388608字/0错误，显示欠载0。

诊断 `nonzero_pcm_packets` 统计首个立体声子采样不为零的音频包，不是非零单个采样总数。协议计数来自HDMI数据岛的实际包选择/组装路径；音频接口增添可选诊断输出，P1/P3未连接时可被综合裁剪。

## 验证边界
声音通过必须包含显示设备实际听音确认。P1早先无声的原因不能仅凭本次SW1状态倒推。参考例程的参数核对和本次开关发现分别保存，后续如无声将继续比较接收设备与协议兼容性。

## 串口控制验证
UART接收器已通过115200/8N1仿真，验证命令字节、短低脉冲过滤和错误停止位拒绝；但实板发送静音/恢复命令后未收到有效诊断帧，原因尚未定位，不能宣称在线控制通过。重新下载默认有声位流后诊断恢复，音频非零包和图片状态正常。后续应独立排查串口发送、端口枚举与板端接收路径；本次基础声音结论来自用户实际听音。

目前切换有声/静音使用两份已验证位流，以下静音操作会重新初始化并加载图片：
```powershell
# 静音图片版
& D:/ANLU/bin/td_commands_prompt.exe scripts/download_p3.tcl
# 图片 + 连续测试音
& D:/ANLU/bin/td_commands_prompt.exe scripts/download_audio_test.tcl
```
