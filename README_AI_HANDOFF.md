# 后续 AI 接手说明

更新：2026-10-27。请先阅读本文件，再阅读 `docs/PROJECT_ROADMAP.md`。只处理技术实现，不讨论参赛资格。

## 用户指令与优先级

- 硬件是大拇指DMZ_EG4S20（EG4S20BG256），不是推荐HX4S20C；使用已核对的DMZ引脚。
- 最终目标：TF图片/音频、HDMI音画融合、稳定播放、交互，以及字幕、转场、缩放、参数OSD、实际音频可视化五项扩展。
- 直接推进功能。不影响最终目标的一般基础测试不要补测，不要重跑未受改动影响的测试，不要每阶段做30分钟长测。
- 用户要求默认关声音；开发/测试结束保持静音。仅进行SRAM下载，未写Flash。
- 图片切换、自动轮播、暂停已完成并上板验证，实际结果见末节。下一阶段从共享FAT文件服务及WAV集成开始，沿用现有统一主工程，不重做已完成的图库功能。

## 路径与工具

工作区：`D:/QQdownload/HX4S20_Contest_202606.zip/HX4S20_Contest_202606/dmz_track1`。

- TD：`D:/ANLU/bin/td_commands_prompt.exe`，6.2.168116。
- PowerShell；Verilator/Make/g++：`C:/msys64/mingw64/bin`。
- Python：`C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe`。读文本指定UTF-8，终端必要时设PYTHONIOENCODING=utf-8。
- CH340近期为COM3，曾重枚举COM8；`system_console.ps1`自动查唯一CH340，支持显式-Port。
- 无需购买/安装工具。当前不使用子代理。不要重置或丢弃工作区已有修改。

## 已验证基线

统一顶层 `rtl/system/dmz_track1_top.sv`，TD工程 `build_system/dmz_track1.al`。
基线已验证：实卡首张640×480 BMP正常且方向正确；HDMI测试音用户听到；M/U静音与恢复、三次软件R重载；30分钟自动诊断3566快照错误/欠载0；HDMI拔插后用户确认自动恢复。
基线布线：建立+1.308ns，保持+0.014ns，6996LUT/4445寄存器/13BRAM9K/8DSP/1PLL。

为防新功能构建覆盖，原始已验证位流备份：`releases/baseline_20261027/dmz_track1.bit`，附manifest和timing。该备份没有新图片轮播功能。

```powershell
./scripts/project.ps1 -Action Build
./scripts/project.ps1 -Action Download
./scripts/project.ps1 -Action Status
./scripts/project.ps1 -Action Mute
./scripts/project.ps1 -Action Tone
```

Download为SRAM临时配置。TD有时TCL错误也返回0，应检查日志和新位流时间/时序；构建脚本已做检查。

## 模块与关键事实

- `rtl/p2`：SDRAM控制、自检、FIFO、状态串口。50MHz内存、25MHz像素、125MHz串行、SDRAM时钟50MHz/180度。
- SDRAM实际2M×32bit（8MiB）。字地址接口，8字/256bit突发。RGB565双帧字节基址0和0x100000；显示读取优先，完整帧在消隐提交。
- **实板READ_WAIT_CYCLES=1，理想引脚仿真用2**，请保留区别；不要用理想模型替代硬宏实测。
- `rtl/p3`：SD SPI只读（CRC16已验证）、FAT16/32根目录、BMP24/32位BI_RGB。首图子集固定640×480，正/负高度支持；不支持exFAT/GPT/子目录或任意尺寸。
- `rtl/system`：统一顶层、默认静音的媒体命令控制、请求/应答诊断CDC。UART接收器在`rtl/audio_test/dmz_uart_rx.sv`，复用正常。
- HDMI协议核来自hdl-util/hdmi MIT，来源见`docs/THIRD_PARTY.md`；不能称全部原创。DMZ底板没有HPD/DDC到FPGA，固定640×480约59.524Hz输出。
- PCM48k/16bit/双声道，N6144/CTS25000。当前播放源还是测试音。
- `rtl/media/dmz_wav_decoder.sv` 已独立通过21项仿真；**未接入SD/FAT、音频FIFO和HDMI播放**。见`docs/WAV_decoder_status.md`，不能宣称WAV播放完成。
- 旧`set_audio_mode.ps1`命令路径有历史失败；统一脚本以字节数组发送、同一串口连接内等待回报已通过，不再使用旧脚本。

## 后续推进顺序

1. 图片索引、上一张/下一张、轮播、暂停已在本轮完成，不要重做。先读末节的验证结果；仅出现具体缺陷时修复。
2. 提取共享FAT文件服务并增加图片/音频两个流上下文；接WAV解析器、音频FIFO和音频优先SD调度，保证加载图片不断音。
3. 字幕/参数OSD → 转场/等比缩放 → 由实际PCM驱动波形/电平和应急模式。
4. 完整场景形成后集中做必要稳定性检查。实体SW0、更多卡、长期听音等一般项不阻塞开发。

## 本轮实施结果（已完成并保存）

已编码并生成新位流：`dmz_bmp_loader #(.GALLERY(1))`最多索引根目录32张BMP（目录顺序），支持指定索引重新加载；默认GALLERY=0保留历史首图测试。新增`dmz_gallery_control`，N下一张/P上一张（手动切换暂停自动）、A自动/H暂停，默认自动、单张图片不重复自动加载，多图每次提交后显示5秒再加载下一张。切换期间保留前台，写完后消隐提交；图片格式错不提交后台，自动模式等待后尝试下一项。

针对性图库仿真通过：3目录项（2张不同内容的有效图、1张压缩坏图），逐像素比较、坏图零写入、重新选择首图。见 `docs/gallery_sim_result.txt`、`scripts/test_gallery.ps1`。新构建通过，建立+0.988ns/保持+0.032ns；7575LUT、4556寄存器、13BRAM9K、6DSP、1PLL。

**新位流已SRAM下载并完成实卡验证**：发现4张BMP；H暂停、N下一张、P上一张、A恢复自动均获板端回报；28秒针对性自动记录遍历全部4个索引，循环顺序正确，提交计数14→19；所有SDRAM/SD/BMP/欠载错误0，默认静音。用户已反馈 **“能切换不同图片，画面正常”**。结果：`docs/gallery_validation_summary.json`、`gallery_controls_log.txt`、`gallery_after_next.json`、`gallery_after_previous.json`、`gallery_auto_cycle.json`。未重复基础长测。完整说明见`docs/GALLERY_STATUS.md`。

**当前板上状态**：自动轮播已开启、音频静音。运行 `project.ps1 -Action Pause` 可保持当前图，`-Action Auto`恢复；`-Action Next/Previous`手动选图并暂停自动。

新控制入口：`project.ps1 -Action Next/Previous/Auto/Pause`。T1ST仍64字节，但版本升级3：word13不再是刷新计数，改为bit5:0图片数、10:6目标索引、15:11显示索引、16自动、17加载中、18索引就绪、31:19提交次数低13位。word9在已有前台时报告307200，后台加载进度不替代前台有效像素。脚本同时支持旧v2、新v3。`mem_status`现在288位；UART像素域命令经保持总线+toggle同步送入内存域。

注意：当前索引仍在原FAT/BMP加载器中，尚未抽取通用文件流服务。后续M2必须共享SD主机与文件上下文，不能让WAV和BMP各自同时驱动SPI。不要把新的图库位流套用旧基线30分钟报告。旧已验证bit在releases目录可回退。

回退命令：`& D:/ANLU/bin/td_commands_prompt.exe scripts/restore_baseline.tcl`。下一位AI不需要重做基础测试，直接从共享FAT/WAV集成继续；新功能按影响范围验证。当前工作区包含大量之前阶段生成物与未提交修改，不要reset/clean；本轮未创建PR、未推送、未写Flash。若要调用完整回归，旧`test_system_integration.ps1`采用理想引脚SDRAM模型wait2/缩短BIST，不冒充实板时序。
