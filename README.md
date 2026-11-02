# DMZ FPGA 多媒体展示系统

当前zyr已迁入main 28298f7的可配置交互平台及优化，保留目录和单工程整理，顶层已恢复上游连接方式。课程、控件、计分与通知由TF配置驱动；本轮尚未上板。

- [本轮迁移与验证边界](docs/MAIN_MIGRATION.md)
- [平台使用与协议](docs/PLATFORM_RUNTIME.md)
- [当前平台键位](docs/PLATFORM_KEYS.md)


硬件：DMZ_EG4S20 / EG4S20BG256。当前已集成TF图片/WAV、板载菜单、字幕、图像参数、等比缩放、擦除转场、实际PCM可视化及应急模式。

- **TD唯一正式工程**：[project/td/dmz_track1.al](project/td/dmz_track1.al)
- **唯一整机顶层**：[rtl/top/dmz_track1_top.sv](rtl/top/dmz_track1_top.sv)
- **操作说明**：[USER_GUIDE.md](USER_GUIDE.md)
- **架构与目录**：[docs/ARCHITECTURE.md](docs/ARCHITECTURE.md)
- **需求与范围**：[docs/REQUIREMENTS.md](docs/REQUIREMENTS.md)
- **验证状态**：[docs/VALIDATION.md](docs/VALIDATION.md)
- **整理进度**：[docs/CLEANUP_PROGRESS.md](docs/CLEANUP_PROGRESS.md)
- **第三方来源**：[docs/THIRD_PARTY.md](docs/THIRD_PARTY.md)

从仓库根目录运行 `./scripts/project.ps1 -Action Build -TdRoot <TD安装目录>`。源码清单为 `project/td/sources.f`；新增源码后运行 `./scripts/build/prepare.ps1` 同步TD工程，Build也会自动同步。

当前功能经FPGA执行，电脑仅用于开发/下载/诊断。只配置SRAM，掉电需要重下；Flash不列为当前必做。已验证P7包位于 `releases/p7_20261028`，不是整理后新编译版本的板测证明。

测试：`./scripts/project.ps1 -Action Test`运行基础矩阵；`./scripts/test/run.ps1 -Profile Full`运行所有已声明变体，生成日志写入build/reports。只保留releases/p7_20261028，历史阶段工程和实现已删除。
