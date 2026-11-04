# FPGA 可配置多媒体展示系统

zyr 已移植 main 最终提交 `b393683` 的有效功能，保留按职责整理的目录和唯一 TD 工程。当前包含 1280×720 宽屏、中文状态栏与滚动字幕、触发波形、19 页自动演示及不同尺寸图片缩放。

本轮仅离线验证，不操作实机。12 项 RTL 仿真已通过；当前构建、时序门槛与交付状态见[验证记录](docs/VALIDATION.md)。用于填写技术文档的详细说明见[技术报告](docs/TECHNICAL_REPORT.md)。

- [TD 工程](project/td/dmz_track1.al)与[唯一输入清单](project/td/sources.f)：57 个 RTL、2 个约束。
- [课程配置](assets/course.json)：19 页、47 控件、55 资源；媒体和 UI 各存一份，见[素材说明](assets/README.md)。
- [操作说明](USER_GUIDE.md)、[架构](docs/ARCHITECTURE.md)、[需求对应](docs/REQUIREMENTS.md)、[演示流程](docs/demo_plan.md)、[第三方来源](docs/THIRD_PARTY.md)。
- [当前交付及候选状态](release/current/README.md)：构建门槛未通过时不会用候选位流覆盖正式位流。

从仓库根目录执行，安装路径按本机填写：

```powershell
./scripts/project.ps1 -Action Package -Python <Python可执行文件>
./scripts/project.ps1 -Action Test -IcarusRoot <Icarus安装目录> -Python <Python可执行文件>
./scripts/project.ps1 -Action Build -TdRoot <TD安装目录>
```

打包输出 `release/current/tf`。仿真使用 Icarus Verilog 的直接 RTL 编译，测试数据从当前素材生成；旧 ModelSim 10.3c 对本版部分 SystemVerilog 表达式存在编译兼容问题。工作库、日志和 TD Runs 都是可删除的生成物，不提交 Git。现有 Word 技术文档由用户维护，本轮未修改。
