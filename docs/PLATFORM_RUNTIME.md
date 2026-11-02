# 可配置交互平台：实现、使用和验证

日期：2026-11-01。目标依据 PROJECT_GOALS_LOCKED.md。所有运行时解析、控制、计分、图层合成及音视频处理均由 FPGA RTL 完成；素材打包工具仅在准备 TF 卡时离线使用。2026-11-02：统一主工程已完成本轮实拍问题修正并下载SRAM：蓝色背景恢复、红色警示页恢复、讲解可重复重播，三个音源和实时波形可用，KEY4结束警示与KEY8返回第三讲均已由用户确认。板端16页课件自动流程通过，最终计分2/3，配置/SD/BMP/WAV错误为0。当前时序setup +0.266ns、hold +0.030ns，LUT16089、BRAM62。位流SHA256：25e1fc49f83a81bdd24e7bcb0c524005cb3921b735ecee7b4adb6d472b03cba9。未写Flash。证据见 docs/platform_v2_board_validation.json 和 docs/platform_runtime_validation_boardfix.json。

## 已接通的功能

首套“声音与音色”配置有 16 页、41 个控件、49 个资源，SCENE.BIN 为 514272 字节。包括等待/封面、课程、三段讲解、观察页三种音源、三道选择题、解析页、结果页和普通/优先通知。正确项由配置提供，当前素材为 A/B/C。

选择与提交分离：确认选项只改变暂选；提交才首次计分并进入解析。未选择不能提交，提交后答案锁定，重复访问和提交不再加分。主页/返回保留记录，重新学习清空记录。结果页动态绘制得分/总分。

页面和音轨按生成的 FAT 8.3 文件名及文件长度查找，不以资源 ID 或目录顺序直接充当播放器索引。页面背景在后帧缓存写入时叠加按钮底图与中文标签；焦点、已选选项及分数由像素域动态绘制。

页面图像完成转场并提交后，才启动本页配置音轨。讲解/观察音源可单次播放；循环由配置指定。音频是否结束以实际从 PCM FIFO 消费的样本对数为准，不以文件读取完毕作为播放完毕。真正的屏幕/喇叭同步时差仍待实测。

普通通知保存页面和焦点，暂停消费原音频 FIFO；优先通知先显示应急遮罩和本地提示，再切换到配置的 ALERT 页。已受理图片 I/O 先排空，忙时普通跳页按键不排队。退出通知重新载入上下文页面、恢复焦点，保留原音频位置；优先通知可覆盖普通通知。A11 物理高电平优先于退出按键。

## TF 卡准备与独立运行

- 声音课件：assets/platform/tf_course_v2。
- 第二套通用通知浏览：assets/platform/tf_notice_v2，使用相同协议和 RTL，单独验证无 WAV 的包。
- 把所选包的 SCENE.BIN、BMP、WAV 放到 FAT16/FAT32 TF 根目录；同卡只使用一份 SCENE.BIN。不要混用两份配置或改动生成后的媒体名称。
- 中文按钮像素已放入 SCENE.BIN，额外 UI 文件和 PACKAGE.json 用于预览/核查，FPGA 不解析 PNG、SVG 或 JSON。
- 当前仍需 JTAG 下载 SRAM 位流；之后读取媒体和交互不需要电脑。Flash 写入及断电启动要等硬件连接后完成。
- 修正版已重新下载；板端页数恢复16，详情见实板记录。

缺失 SCENE.BIN 时进入兼容图库。CRC/语义失败不激活课件，保留错误状态和兼容媒体入口；修正 TF 文件后重新启动或重扫。不要把兼容图库出现图片当作课件验证通过。

## 按键和设置

按键完整说明见 PLATFORM_KEYS.md。课件模式 KEY12 打开显示设置，再次按 KEY12 在显示/系统页签切换；不允许从旧文件菜单随意换背景来破坏课件上下文。兼容模式仍有图片/WAV/显示/系统四页签。

显示页上下选亮度、对比度、恢复默认，左右调整，KEY10 确认。系统页提供当前音频重播、重扫 TF/重启以及恢复播放。音量仍为 0～8，未提高信号增益；扩展屏自身音量决定最终响度上限。

A9 向板内运行、向板边缘复位；A11 向板内触发物理优先通知，向板边缘释放；A12 向板边缘显示可视化、向板内隐藏。

## 单一主工程结构

| 路径 | 用途 |
|---|---|
| build_system/dmz_track1.al | 唯一 TD 主工程 |
| rtl/system/dmz_track1_top.sv | 时钟、存储仲裁、跨时钟状态、键位、合成和 HDMI 总装 |
| rtl/media/dmz_media_storage.sv | TF/FAT 文件、启动配置、媒体播放器与平台适配 |
| rtl/platform/dmz_scene_loader.sv、dmz_platform_boot.sv | 版本/长度/CRC 检查，启动文件读取与排空 |
| rtl/platform/dmz_cfg_writer.sv | 32 字节对齐写入 SDRAM 配置暂存区 |
| rtl/platform/dmz_scene_runtime.sv | 语义验证、目录绑定、描述符缓存、页面/音频适配与通知管理 |
| rtl/platform/dmz_ui_controller.sv、dmz_ui_keys.sv | 通用控件动作、焦点、首次计分和互斥键路由 |
| rtl/platform/dmz_page_compositor.sv | 从配置内贴图读取像素，写入后帧缓存 |
| rtl/platform/dmz_ui_overlay.sv | 动态焦点、选择状态及得分绘制 |
| rtl/platform/dmz_audio_completion.sv | 音轨票据、刷新握手、实际样本消费完成判断 |
| rtl/platform/dmz_mem_mux.sv | 带响应归属的非流水内存仲裁，视频请求优先 |
| rtl/p2、rtl/p3、rtl/p1 | SDRAM、FIFO、帧缓存、SD SPI 和 HDMI 基础模块 |
| assets/platform/*.json | 两套离线源配置 |
| scripts/pack_platform.py | 准备 TF 包；更换配置无需改 RTL |
| scripts/build_system.ps1 | 严格构建检查，新位流、关键警告及完整 setup/hold 时序 |
| scripts/test_runtime.ps1、sim/platform | 平台及真实素材存储链路仿真 |

主工程没有分裂为各功能独立工程。旧 rtl 分期目录保留是因为主工程仍引用其中模块。

## v2 协议与容量

固定 32 字节头，资源/页面/控件记录各 32 字节，随后是按 32 字节对齐的 A1R5G5B5 贴图数据，CRC32 覆盖整个有效载荷。贴图透明度以 PNG alpha>=128 为不透明，属于二值透明，不承诺半透明混合。

上限：64 个资源、32 页、128 个控件、每页 8 控件、4 层、配置有效载荷 1 MiB；当前按钮贴图至多 272×64。素材 BMP/WAV 仍受现有媒体格式约束，目录索引最多 32 BMP/16 WAV。HDMI 保持 640×480，WAV 为 PCM 48kHz/16位/双声道。

SDRAM 字节地址：帧缓存 0x000000、0x100000；配置及贴图 0x200000～0x2FFFFF。对 SDRAM 控制器的请求地址以 32 位字为单位，配置基址为 0x080000，BL8 每次 32 字节。无有效 CRC 提交及语义验证，不启用暂存配置。

生产版音频 FIFO 为 2048 对样本，约 42.7ms（此前媒体调试版本为 4096）；采样率、位宽、声道及增益不变。补充定速 SPI/异步 FIFO 仿真，实际 TF 卡极端延迟仍待硬件验证。目录名称和文件长度分时读取，共享 BRAM；图片选择增加元数据等待，不降低音频采样率。独立中文图层采用单像素源缓存，以更多受仲裁的读事务换取寄存器空间。ASCII OSD 常量文本及字体放入同步 BRAM ROM，保持原像素对齐。

## 软件验证与证据边界

已通过：真实 v2 配置 CRC→SDRAM 写入/读回、打乱目录的名称匹配、课程闭环、重复计分保护、通知恢复；五控件中文合成整帧与独立参考像素逐一比较，包含 BMP 正/反行序和内存反压；实际消费样本的单次/循环/停止；真实素材组成碎片化 FAT32 的完整媒体存储链路；第二套无 WAV 配置；CRC、文件长度、非法控件的失败不激活；既有媒体和 SDRAM/串口相关回归。

运行命令均从主工程目录执行：

```powershell
./scripts/test_platform.ps1
./scripts/test_ui.ps1
./scripts/test_runtime.ps1
./scripts/test_runtime.ps1 -Notice
./scripts/test_runtime.ps1 -Media
./scripts/test_runtime.ps1 -Media -Notice
./scripts/test_runtime.ps1 -Media -Timed
./scripts/test_runtime.ps1 -Fault badmeta
./scripts/test_runtime.ps1 -Fault badwidget
./scripts/test_runtime.ps1 -Fault badcrc
./scripts/build_system.ps1
```

DPI C++ 磁盘后端只属于仿真测试，模拟 TF 文件内容，不进入 FPGA 源文件列表。模拟存储接口不证明板级信号完整性、HDMI 接收设备时差、实际 TF 卡极端读延迟或冷启动。

生产版上电 BIST 保留四模式全地址验证，锁存错误标志而不累计全部错误字数；COUNT_ERRORS/FULL_TELEMETRY 调试参数保留计数版本。

最终结果和源文件/位流对应关系见 platform_runtime_validation_boardfix.json、system_manifest.json。旧 p7/paired/ui_keys 归档分别只证明当时的版本。

## 生产诊断与剩余工作

主工程默认 FULL_TELEMETRY=0：T1ST v5 的 32 字节报文保留页面、焦点、得分、播放/按键和错误状态；system_console.ps1 支持状态与命令确认。完整 v4 报文可通过 FULL_TELEMETRY=1 编译用于调试，但本平台全功能下资源/时序未保证，不能直接用于最终交付。v5 不提供 HDMI 包计数、精确 FIFO 占用等，脚本不会把缺失计数当成通过证据，Smoke 明确拒绝该模式。

后续：接回硬件验证新 TF 包与新键位 → 验证喇叭实际音画边界与优先通知恢复 → 实施 Flash 固化、断电独立启动 → 整理三分钟演示和设计说明。当前不需要用户重复已验证的旧图库基础测试。

本批定速存储测试消费 110180 对样本，音频欠载为 0；这是模拟卡读速率和等待的结果，不替代真实 TF 卡验收。
