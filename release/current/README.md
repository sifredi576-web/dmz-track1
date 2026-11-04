# 当前交付与候选状态

2026-11-04：main最终版已迁入zyr，12项RTL仿真通过，综合/布局/布线/位流生成完成。但STA为99.99%，且存在与main相同的两路PLL反馈局部布线提示，未通过100%覆盖与critical warning发布门槛。

| 文件 | 实际状态 |
|---|---|
| dmz_track1.bit、build_manifest.json、timing.txt | **仍为此前验证的640×480版本，不对应当前源码**；未以新候选覆盖 |
| candidate_manifest.json | 本轮1280×720候选的源码/工程/流程/位流哈希及资源结果，release_gate_passed=false |
| verification.json | 当前移植、12项测试、构建结果、main对照和未完成项 |
| tf/ | 当前19页课程生成包，与main最终运行文件逐字节一致；不适用于把旧bit冒充当前版本 |

新候选实际文件：`project/td/dmz_track1_Runs/phy_1/dmz_track1.bit`；候选最终时序、检查和详细日志均在TD Runs及build/reports，属于本地生成物。删除生成目录后需要重新构建。

正式Download入口会因源码/工程哈希不匹配而拒绝旧位流。本轮没有执行下载、板测、Flash、提交或合并。后续审查时序覆盖和PLL反馈后再决定发布，不直接复制候选绕过检查。详细报告见[TECHNICAL_REPORT.md](../../docs/TECHNICAL_REPORT.md)。
