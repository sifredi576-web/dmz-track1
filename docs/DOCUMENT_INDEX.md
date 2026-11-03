# 工作区文档导航

整理日期：2026-11-01。以现有文件路径为准；原始参考资料和脚本输出不移动，避免破坏引用。完整清单见[DOCUMENT_INVENTORY.csv](DOCUMENT_INVENTORY.csv)，含路径、分类、类型、大小。清单不含build_system生成目录、vendor和release内的重复文档，也不包含工作区之外的Downloads文件。

## 建议阅读顺序

1. [最终目标与实施边界](PROJECT_GOALS_LOCKED.md)：当前最高优先级要求；可配置交互平台、声音教学示范、三分钟视频、后续Flash固化。
2. [项目总览](../README.md)：统一工程入口与文件结构。
3. [配置交互平台实现与使用](PLATFORM_RUNTIME.md)：本批主工程、v2 素材包、中文图层/课程/通知及验证边界。
4. [用户使用说明](../USER_GUIDE.md)：安路TD、下载、媒体格式及板载操作；历史媒体/TD操作仍保留，新课件键位以 PLATFORM_KEYS 为准。
4. [配对播放](PAIRED_PLAYBACK.md)：已实现的图片/WAV配对、短文件名要求与实物证据。
5. [AI交接说明](../README_AI_HANDOFF.md)：继续开发前阅读；最新目标优先于其较早阶段描述。

## 新按键开发版

- [PLATFORM_KEYS.md](PLATFORM_KEYS.md)：新键位、资源/显示/系统菜单及通用交互内核；已上板，课件自动状态流程已通过；屏幕、声音及实体按键仍待用户确认。

## 本批素材改造

- [素材驱动平台改造](PLATFORM_ASSET_IMPLEMENTATION.md)：协议、打包、启动校验、范围边界与后续集成。
- [课件布局参考预览](materials/course_reference/CONTACT.png)：软件参考渲染，非板卡截图。

## 当前设计与开发依据

| 文档 | 用途与适用范围 |
|---|---|
| [PROJECT_GOALS_LOCKED.md](PROJECT_GOALS_LOCKED.md) | 当前有效目标；计划不等于完成 |
| [PROJECT_ROADMAP.md](PROJECT_ROADMAP.md) | 路线；顶部最新声明优先，后续旧里程碑仅参考 |
| [PROJECT_PROGRESS.md](PROJECT_PROGRESS.md) | 阶段进度；按记录日期区分 |
| [ENGINEERING_STRUCTURE.md](ENGINEERING_STRUCTURE.md) | 现有媒体底座结构；不是已实现配置化平台的证明 |
| [DMZ_BOARD_CONTROLS.md](DMZ_BOARD_CONTROLS.md) | 硬件器件位置、矩阵按键及拨码 |
| [THIRD_PARTY.md](THIRD_PARTY.md) | 第三方代码、器件IP及来源 |
| [CONTRIBUTING.md](../CONTRIBUTING.md) | 工程协作约定 |

## 已实现功能的专题说明

- [PAIRED_PLAYBACK.md](PAIRED_PLAYBACK.md)：当前配对播放，包含2026-11-01实板更新。
- [P7_VISUAL_EMERGENCY.md](P7_VISUAL_EMERGENCY.md)：PCM可视化和应急模式。
- [OSD_MENU_STATUS.md](OSD_MENU_STATUS.md)：文件菜单阶段设计。
- [DISPLAY_EFFECTS_STATUS.md](DISPLAY_EFFECTS_STATUS.md)：显示参数、运行时间、字幕阶段记录。
- [AV_INTEGRATION_STATUS.md](AV_INTEGRATION_STATUS.md)：原音画集成阶段。
- [GALLERY_STATUS.md](GALLERY_STATUS.md)：轮播阶段。
- [WAV_decoder_status.md](WAV_decoder_status.md)：WAV解析阶段。
- [HDMI_audio_test.md](HDMI_audio_test.md)：早期HDMI音频排查。

这些专题中的“下一步”和待确认项可能属于当时阶段，当前目标与最新实测证据优先。

## 历史阶段材料

[P1_status.md](P1_status.md)、[P2_status.md](P2_status.md)、[P3_BMP_preview.md](P3_BMP_preview.md)、[BASELINE_ACCEPTANCE.md](BASELINE_ACCEPTANCE.md)、[requirements_and_tasks.md](requirements_and_tasks.md)用于追溯早期实现，不作为现行总目标。旧构建目录和P6及更早release已清理，不能照旧路径下载。

## 验证记录怎么读

- paired_board_validation_20261101.json：修正TF短文件名后的实板结论及用户“切换较快”反馈；精确时差未测。
- paired_fixed_cycle_20261101.json：四组图片/音轨索引循环及错误/欠载计数。
- tf_rename_20261101.json、tf_formats_20261101.json：素材重命名哈希及格式。
- paired_validation.json、pair_sim_result.txt、media_paired_result.txt：2026-10-31软件验证。
- system_build_log.txt、system_download_log.txt：可被下次脚本覆盖的最近构建/下载日志，不是永久版本标识。
- p7_validation.json、p6_validation.json及其他阶段结果：对应历史版本，不能替代新增功能实测。
- *_lint.txt、*_sim_build.txt、*_result.txt：翻译诊断、编译输出、仿真结果；不同文件作用不同。

releases/p7_20261028保留已实物验证基线；releases/paired_20261031保存配对版软件构建归档。版本结论还应结合后续实板JSON记录。

## 工作区硬件与软件参考资料

以下路径相对于工作区根目录（工程dmz_track1的上一级）：

| 路径 | 用途 |
|---|---|
| 大拇指安路EG4S20 - 板卡和开发工具入门.pdf | 当前DMZ核心板与开发入门 |
| EG4S20BG256核心板 - 2023.pdf | 核心板原理图 |
| 微处理器原理综合设计底板/ | 当前配套底板说明、原理图和引脚 |
| EG4S20数据手册/ | FPGA、PLL、RAM、IO及启动相关指南 |
| HX4S20_Contest_202606/ | 推荐板卡赛题资料、参考例程及芯片资料；不能直接套用其引脚到DMZ |
| HX4S20_Contest_202606/HX4S20安装驱动文档/ | TD与驱动安装参考 |
| 实验系列一：数字电路/、实验系列二：走近FPGA/ | 学习资料 |
| 产出/EG4S20开发板全景梳理.md | 板卡资料梳理 |
| ES8388 Module/、高速ADDA原理图.pdf | 外围参考，不代表当前HDMI项目已使用 |

外部参考按来源原位保留。文档标题或推荐板型号不能作为当前实际硬件配置的依据。

## 外部方案与尚未落盘的素材提示词

用户提供的INTERACTIVE_CLASSROOM_PLAN.md位于Downloads，不在当前工作区；其原始教学方案供参考，当前最终定位以PROJECT_GOALS_LOCKED.md为准。对话中的多图层素材生成提示词尚未单独保存为素材制作手册，不能误认为已有对应文档或资源加载实现。

## 清单统计

- 参考例程附带记录：66份。
- 硬件与外部参考：169份。
- 项目说明与设计：25份。
- 项目验证与日志：269份。

统计口径包含文本日志和JSON证据，不把它们都视为需要人工逐份阅读的说明书。

## 2026-11-02 实板修正版

- [实板修正说明](PLATFORM_BOARD_FIX_NOTES.md)
- [本版软件与时序证据](platform_runtime_validation_boardfix.json)
- [本版板端验收记录](platform_v2_board_validation.json)

## 2026-11-02 当前状态界面版

- [右侧状态与参数说明](STATUS_PARAMETER_PANEL.md)：已实物验收，包含扩展(4)参数OSD。
- [当前验收证据](status_panel_validation.json)。
- 触发稳定和左侧按钮仍未实现，等待单独执行指令。
