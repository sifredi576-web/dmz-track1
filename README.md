# FPGA声音课件展示系统

硬件：DMZ_EG4S20 / EG4S20BG256，单板，HDMI 640×480，PCM 48kHz/16位双声道。当前包含图文讲解、三音源观察、答题计分、通知插播、图片等比缩放、擦除转场、显示参数与PCM可视化。

- TD唯一工程：[project/td/dmz_track1.al](project/td/dmz_track1.al)，输入清单：[sources.f](project/td/sources.f)。
- 课件源：[assets/course.json](assets/course.json)，媒体和UI各保留一份，见[素材说明](assets/README.md)。
- 最新交付：[release/current](release/current)。位流、构建清单、最终时序和验证摘要保留；TF包由素材生成。
- [操作说明](USER_GUIDE.md)、[架构](docs/ARCHITECTURE.md)、[需求对应](docs/REQUIREMENTS.md)、[验证状态](docs/VALIDATION.md)、[后续演示补齐方案](docs/demo_plan.md)、[第三方来源](docs/THIRD_PARTY.md)。

从仓库根目录执行：

```powershell
./scripts/project.ps1 -Action Package
./scripts/project.ps1 -Action Build -TdRoot <TD安装目录>
./scripts/project.ps1 -Action Test -ModelSimRoot <ModelSim安装目录>
```

Package输出release/current/tf；Build成功后更新release/current中的位流、manifest和timing。Test只包含三项直接RTL检查，无源码转换、历史顶层或双后端。生成工作目录在build及TD原生Runs，均不提交Git。

本次整理未操作板卡。实板确认状态与具体构建结果以[验证摘要](release/current/verification.json)为准；技术文档由用户继续更新。
