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

新增平台细节见[迁移记录](MAIN_MIGRATION.md)与[平台协议](PLATFORM_RUNTIME.md)。运行时/UI调度位于control，配置解析/写入/仲裁位于storage，页面静态合成与动态叠加位于video，实际播放完成位于audio；rtl/platform继续保留器件资源封装。

数据链路：TF→SD读卡/仲裁→FAT目录与文件流；图片→BMP缩放→SDRAM双帧→擦除/参数/OSD→HDMI；WAV→音频FIFO/音量→HDMI与PCM可视化。板载控制和UART共用命令入口。

## 当前模块边界

| 模块 | 职责 |
|---|---|
| dmz_track1_top | 上游整机连接、时钟/复位、输出组合、共享CDC和v4/v5状态打包 |
| dmz_media_pipeline | FAT目录、图片/WAV播放、配置运行时及读卡仲裁；原dmz_media_storage更名 |
| video下各模块 | BMP解码/缩放、帧缓存、显示参数、OSD、页面合成与动态控件 |
| audio下各模块 | WAV解析/播放、播放完成、提示音与PCM可视化 |
| control下各模块 | 按键/UART命令、文件菜单、播放/应急控制及课程运行时 |

2026-11-02撤回额外的音频、视频、控制和诊断四层封装，避免本版TD综合面积增加。功能模块和目录分类保留；顶层采用main 28298f7的原始连接与逻辑，仅将dmz_media_storage更名为dmz_media_pipeline。最终PCM仍同时送HDMI与可视化，跨时钟与诊断模式保持上游实现。dmz_contract_pkg保留为旧共享定义，当前上游迁入代码并未全面引用它，修改其中常量不会自动修改整机行为。

保持25MHz像素、125MHz串行、50MHz内存域；两帧RGB565字节基址为0和0x100000。完整后台帧才允许提交/转场，音频低水位优先读卡。硬件SDRAM读等待为1，理想引脚模型使用2，两者不能混用。

TD的 `project/td/dmz_track1_Runs/` 按工具原生布局生成，忽略提交。删缓存不删 `.al`、源码清单、约束和手写仿真代码。旧阶段工程和实现已移除；所有测试直接连接当前RTL，不保留并列演示/下载入口。

测试统一入口为scripts/test/run.ps1，sim/tests.json明确每组源码及变体；Base每个默认组执行一个基础用例，Full执行默认组所有变体。architecture为显式选择的ModelSim比较测试，从Git基线生成旧顶层至build，不维护第二套生产源码。ModelSim使用行为模型；Verilator共用sim/runner.cpp。生成文件均放build。

正式输入清单为sources.f；inputs.sha256.json记录本次编译验证后的输入哈希。它用于发现未核验的变动，不代表与重构前源码相同。有意修改后应完成相应验证，再显式更新基准。
