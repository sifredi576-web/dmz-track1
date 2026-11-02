# main功能迁入zyr：本轮状态

2026-11-02。当前zyr已撤回四层额外封装，并补齐主分支布局优化参数。复用已验证综合结果的一次物理重跑通过，已生成当前新位流；16089 LUT、8844寄存器、setup +0.266ns、hold +0.030ns，STA覆盖100%。指定范围仿真通过，尚未上板。未提交或合并。

## 已迁入

- SCENE.BIN v1/v2校验、SDRAM配置存储、按短文件名及长度绑定资源、兼容图库回退。
- 配置页面、中文按钮贴图、动态焦点/选项/分数、首次提交计分、课程跳转与重学。
- 单次/循环/停止/重播、图像提交后启动音轨、实际消费PCM计数与刷新票据握手。
- 普通/优先通知、上下文及音频位置保留、物理应急优先；新键位、显示/系统菜单及配对模式。
- 颜色旁路与无符号运算修复、共享目录BRAM、2048对样本音频FIFO、地址重编码、文本/字模BRAM、精简v5诊断及可选v4诊断。
- 两套现行v2素材包、源JSON、离线打包/预览/OSD生成工具、v4/v5板端诊断脚本。Flash及冷启动在来源分支也未完成，本轮不把它列为已实现。

## 当前结构

| 内容 | 位置/模块 |
|---|---|
| 唯一工程与清单 | project/td/dmz_track1.al、sources.f；55项正式输入 |
| 整机连接 | rtl/top/dmz_track1_top.sv，保留共享CDC、内存仲裁及板级资源 |
| 运行配置、UI、配对与媒体调度 | rtl/control；dmz_media_pipeline为原dmz_media_storage更名 |
| 配置解析/存储、目录及内存仲裁 | rtl/storage |
| 合成、焦点/得分、OSD和输出 | rtl/video各功能模块，输出组合留在顶层 |
| 播放完成、FIFO/音量与输出 | rtl/audio各功能模块，FIFO/音量组合留在顶层 |
| 诊断 | 顶层状态打包，默认32字节v5，可选96字节v4 |
| 工具/测试/生成物 | scripts/assets、scripts/test、scripts/board；sim/tests.json；build与TD原生Runs |

没有带回旧阶段工程、旧build目录或重复C++测试入口。设备封装仍在rtl/platform。

## 初次迁入的验证结果（撤回封装前）

1. 除顶层拆分外，53项上游正式输入与指定main提交逐字节一致（仅接受换行差异及media_storage模块更名）。两个运行时HEX与发布素材包的SCENE.BIN完全一致。源码和新位流哈希与本轮构建清单一致。
2. 两种诊断参数下，新旧顶层分别比较77861个像素周期、263665次TMDS采样，RGB、最终PCM、控制、状态字段及板级输出一致。使用相同注入像素/PCM/UI状态和行为时钟、占位SDRAM；这不等于真实SD卡全链路或形式等价证明。
3. 模块/集成断言共22个用例通过：音频完成、FIFO重编码、UI键路由、配置加载、UI计分、逐像素页面合成、课程运行时5个变体、两版顶层、两版诊断字段、显示、播放控制、OSD、波形、WAV、缩放、SDRAM及配对控制。覆盖课程闭环、通知恢复、重复计分保护、第二配置和非法配置拒绝。
4. 离线打包器14项检查通过。测试输入从发布包重建的量化素材产生，不是缺失的原始PNG/SVG工程稿，不据此声称已恢复原稿。
5. 完整TD构建通过，STA覆盖100%，setup +0.953ns、hold +0.024ns；16823 LUT、8854寄存器、62 BRAM9K、20 DSP、1 PLL。约束及工作频率未改。首次构建出现-0.012ns短BRAM输入hold违例，已通过布线后fix_hold解决并重新完整构建。

主分支记录为16089 LUT、8844寄存器、setup +0.266ns、hold +0.030ns。本轮LUT多734、寄存器多10，BRAM/DSP/PLL相同；未在本机重建主分支物理版，以上为来源记录对照，不能声称资源或物理实现完全相同。功能仿真未发现已知输出差异。

## 暂停与未完成范围

真实素材完整FAT→配置→中文合成→WAV联动长仿真在旧ModelSim上运行约18分钟CPU时间仍未结束，按用户避免反复试错的指示主动停止。该运行不是通过，也没有产生可用的最终断言结论；第二包完整媒体链路、带定速读卡延迟的FIFO长仿真未运行。兼容图库完整媒体回归本轮未完成；其他既有Full矩阵及Verilator后端也未全部执行。

本次不再围绕上述长仿真或LUT差异继续试探。新位流尚未实板复核，现阶段结论是“功能已迁入，指定范围的软件对照通过，完整效果一致尚未最终确认”。

ModelSim10.3c的固定索引函数敏感性和内存索引编译兼容仅作用于build内仿真副本；生产叶子RTL保持上游实现。适配中修正了函数参数展开的括号/位宽及测试文件路径，未通过修改生产算法绕过断言。

## 复现入口

从仓库根目录运行：

```powershell
./scripts/build/build_system.ps1 -TdRoot <TD目录>
./scripts/test/run.ps1 -Simulator ModelSim -Tests architecture,architecture_full
./scripts/test/run.ps1 -Simulator ModelSim -Tests scene_runtime -Profile Full
python tests/test_platform_pack.py
```

可选长仿真（耗时明显，不属于默认快速回归）：

```powershell
./scripts/test/run.ps1 -Simulator ModelSim -Tests platform_media -Profile Full
```

原始日志与构建manifest在build/reports，来源对照在build/migration_provenance.json。状态摘要为docs/verification/main_migration.json。板卡下一步只需先验证当前声音课件的颜色、重播、三音源、答题/计分、通知退出和返回；第二包及极限读卡延迟另列验收，不能由历史实板报告替代。

## 资源差异：本机限次对照（2026-11-02）

用户追加授权仅做容易实施的修正尝试。本轮三次综合均通过，每次约1.5～2分钟，未做布局布线、长仿真或板卡操作。

| 综合输入 | LUT | 寄存器 |
|---|---:|---:|
| 当前拆分版基线 | 16287 | 8868 |
| 恢复内部wire初始化写法，并调整集中声明顺序 | 16287 | 8868 |
| 当前目录/叶子源码，换用main原顶层（仅pipeline模块更名） | 15626 | 8868 |
| 当前拆分版四个封装加keep_hierarchy=false | 16287 | 8868 |

所有试验均为62 BRAM9K、20 DSP。第一项未将全部声明放回原行位置，因此不能据此排除一切源码排列因素。原顶层试验在本机复现了main的综合LUT数，确认额外661 LUT与新增顶层拆分这一组改动有关；尚未独立定位其中哪一个封装或具体综合优化机制。不能再把它解释成纯物理布局波动。

两个小改没有改善，按限次要求停止，没有将试验写回正式RTL，也没有用恢复原顶层的试验覆盖现有架构。当前正式59项输入仍与上一轮完整构建哈希一致；原顶层方案尚无本轮物理时序/新位流验证。下一步若选择撤回四层额外封装，可保留已有目录及单工程整理，无需整体退回旧工程。原始试验及哈希在build/lut_probe/result.json，结果同步到现有verification/main_migration.json。

## 撤回额外封装：首次构建记录（后续已修正）

- 已恢复main原顶层逻辑，仅保留media_storage→media_pipeline更名；删除音频、视频、控制、诊断四层封装，工程/测试引用同步移除。目录分类、唯一工程、叶子功能及主分支优化保留。
- 55项正式输入中，54项上游输入（含顶层）与28298f7一致，仅接受更名及换行差异。inputs.sha256已刷新为当前综合/仿真版本；这不代表已生成合格位流。
- 两种诊断模式重新对照各77861个像素周期、263665次TMDS采样，RGB、PCM、控制、状态帧与板级输出一致；实际顶层的v4/v5状态字段128组向量通过。测试使用注入生产数据及行为板级模型，未覆盖完整真实媒体链路或实板。
- 综合15626 LUT、8868寄存器、62 BRAM9K、20 DSP，与主分支综合记录一致，消除了拆分版额外661 LUT。
- 唯一一次完整构建在布线阶段失败：PHY-8023，x5y38_local4处ctrl/write_data[93]与storage/platform_boot/writer/mux0_syn_2[48]冲突；随后RUN-8102退出。没有换种子、调参数或再次重编。尚无最终布线资源、STA和新位流结果；中间时序和旧报告不能当作验收结果。
- 工程目录中原有bit及build_manifest仍属于撤回前版本，不能用于当前源码验收。下载脚本目前只检查bit存在，不校验源码一致性；本轮未执行下载，也未扩大范围修改下载工具。
- 上游前置声明、HDMI初始化、BRAM映射及仿真启动/端口宽度warning保留，未声称清零。ModelSim对顶层的声明兼容仅写build副本，生产RTL不改写。

本轮停在“面积恢复、软件对照通过，物理实现未完成”。当前结果与源码/日志哈希见verification/main_migration.json及build/reports/restored_top_result.json。

## 补齐布局配置：当前结果

只补齐两项遗漏：place opt_timing=high、post_place_opt=high，保留seed=3；scripts/build/td_flow.tcl与正式TD工程的PlaceProperty同步。RTL、引脚/时钟约束及综合数据库均未改变，55项输入哈希核对通过；因此复用此前双模式输出对照和128组状态字段测试，不重复仿真或综合。

用户授权后仅重跑一次物理流程，约3分50秒完成；布局、布线、显式hold修正及位流生成通过，无布线冲突。最终16089 LUT、8844寄存器、62 BRAM9K、20 DSP、1 PLL；setup +0.266ns、hold +0.030ns，STA覆盖100%，含SDRAM硬宏。资源与时序余量均复现主分支记录，相比最初拆分迁入版减少734 LUT、10寄存器。

新bit与55项源码、工程配置、流程脚本的SHA256已核对；build_manifest已更新，原有bit由本次新文件替换。历史首次布线失败日志仍保留。PHY-7002硬宏位置调整和PHY-5079局部时钟布线warning仍存在，未声称警告清零；最终STA已通过。当前结论为“源码整理保留、资源恢复、物理构建及指定软件对照通过”，完整真实媒体长测与实板复核仍未完成。

结果同步到verification/main_migration.json；原始重跑日志为build/reports/phy_1_replay.log。新位流为project/td/dmz_track1_Runs/phy_1/dmz_track1.bit。未下载、未操作Flash、未提交或合并。
