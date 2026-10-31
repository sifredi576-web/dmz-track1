# 工程结构

唯一正式工程为 `project/td/dmz_track1.al`，唯一顶层为 `rtl/top/dmz_track1_top.sv`。`project/td/sources.f` 是正式编译输入清单，不包含历史诊断模块。TD工程和原生运行快照由 prepare.ps1 依据同一清单同步。

| 目录 | 内容 |
|---|---|
| rtl/top | 时钟/复位、板级资源与各子系统连接 |
| rtl/platform | 安路PLL等器件资源封装 |
| rtl/storage | SD/SPI、FAT、共享文件流、SDRAM及自检 |
| rtl/video | BMP解码/缩放、帧缓存/转场、像素参数与OSD |
| rtl/audio | WAV解析/播放、提示音及实际PCM可视化 |
| rtl/control | 按键、文件菜单、图片/音频/应急调度及共享媒体流水线 |
| rtl/common | 共享命令/状态定义、FIFO、跨时钟、UART、状态上报、串行除法器 |
| rtl/hdmi | 已适配HDMI协议和EG4串行输出 |
| constraints | 唯一当前板卡引脚/时钟约束 |
| sim/unit、integration | 模块与共享媒体/OSD集成测试 |
| sim/models、fixtures | 存储/PHY行为模型及共用测试数据 |
| scripts/build、test、board | 构建、仿真、下载/实板诊断；project.ps1为统一入口 |
| build | 仿真可执行文件和本次运行报告，不提交 |
| docs/verification/history | 筛选保留的39份原始证据，不作日常操作入口 |
| releases/p7_20261028 | 唯一保留的已验证发布包，5个文件保持原内容 |

数据链路：TF→SD读卡/仲裁→FAT目录与文件流；图片→BMP缩放→SDRAM双帧→擦除/参数/OSD→HDMI；WAV→音频FIFO/音量→HDMI与PCM可视化。板载控制和UART共用命令入口。

## 当前模块边界

| 模块 | 职责 |
|---|---|
| dmz_track1_top | 板级连接、时钟/复位、SDRAM与帧缓存连接、共享状态CDC、HDMI连接 |
| dmz_control_subsystem | 按键/UART仲裁、文件菜单、播放与应急控制 |
| dmz_media_pipeline | FAT目录、文件流、图片/WAV播放与读卡仲裁；原dmz_media_storage从storage迁至control并更名 |
| dmz_audio_output | 音频FIFO、预填充/欠载处理、音源选择、音量/静音，输出最终双声道PCM |
| dmz_video_output | 像素FIFO、RGB转换、画面参数、OSD与PCM可视化叠加 |
| dmz_telemetry | 内存/音频状态打包、96字节v4串口状态帧与校验 |

命令字节、菜单/状态位偏移及固定媒体参数统一在`rtl/common/dmz_contract_pkg.sv`；菜单、内存和音频快照的生产端与使用端按同一组字段名定位。总线宽度和状态帧长度由包中的定义引用。包排在sources.f首项；修改命令或字段先改这里，再核对生产端和使用端；改变显示规格还需要调整解码、帧缓存和HDMI时序，不能只改常量。最终PCM同时送HDMI和可视化。共享状态CDC留在顶层，因为控制、显示和诊断都要使用；诊断模块不拥有跨时钟桥。

本次保留原算法、复位条件和流水周期；实例路径因模块拆分而变化。引脚/时钟约束未改，未引入新时钟域或新协议版本。

保持25MHz像素、125MHz串行、50MHz内存域；两帧RGB565字节基址为0和0x100000。完整后台帧才允许提交/转场，音频低水位优先读卡。硬件SDRAM读等待为1，理想引脚模型使用2，两者不能混用。

TD的 `project/td/dmz_track1_Runs/` 按工具原生布局生成，忽略提交。删缓存不删 `.al`、源码清单、约束和手写仿真代码。旧阶段工程和实现已移除；所有测试直接连接当前RTL，不保留并列演示/下载入口。

测试统一入口为scripts/test/run.ps1，sim/tests.json明确每组源码及变体；Base每个默认组执行一个基础用例，Full执行默认组所有变体。architecture为显式选择的ModelSim比较测试，从Git基线生成旧顶层至build，不维护第二套生产源码。ModelSim使用行为模型；Verilator共用sim/runner.cpp。生成文件均放build。

正式输入清单为sources.f；inputs.sha256.json记录本次编译验证后的输入哈希。它用于发现未核验的变动，不代表与重构前源码相同。有意修改后应完成相应验证，再显式更新基准。
