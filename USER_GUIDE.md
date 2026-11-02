# 用户使用说明（含安路TD软件）

## 当前开发版（2026-11-02，已下载SRAM，未固化）

统一主工程已完成本轮实拍问题修正并下载SRAM：蓝色背景恢复、红色警示页恢复、讲解可重复重播，三个音源和实时波形可用，KEY4结束警示与KEY8返回第三讲均已由用户确认。板端16页课件自动流程通过，最终计分2/3，配置/SD/BMP/WAV错误为0。当前时序setup +0.266ns、hold +0.030ns，LUT16089、BRAM62。位流SHA256：25e1fc49f83a81bdd24e7bcb0c524005cb3921b735ecee7b4adb6d472b03cba9。未写Flash。证据见 docs/platform_v2_board_validation.json 和 docs/platform_runtime_validation_boardfix.json。

使用说明及工程结构见[配置交互平台说明](docs/PLATFORM_RUNTIME.md)，键位见[平台按键说明](docs/PLATFORM_KEYS.md)。唯一主工程仍是 build_system/dmz_track1.al。课件素材包在 assets/platform/tf_course_v2，另一套配置在 assets/platform/tf_notice_v2；同一 TF 卡根目录只使用一份 SCENE.BIN。没有有效配置时保留媒体兼容模式。

板卡、COM9、JTAG、HDMI 和新课件 TF 卡现已连接；本轮先完成 SRAM 课件验收，未执行 Flash 擦写。音量继续保留 0～8 档及原增益；最终响度上限受扩展屏音量设置限制。

使用新课件时，复制 tf_course_v2 中的 SCENE.BIN、BMP 和 WAV 到 TF 根目录；FAT16/FAT32 均可，文件名以包内生成的名称为准，不要改为长文件名。PACKAGE.json 和 UI 文件是检查/预览辅助文件，板端按钮像素已嵌入 SCENE.BIN。换包后重新启动或重扫，不能带电拔卡后假定已自动识别。

课件中 KEY14/6/11/9 为上/下/左/右，KEY10 确认，KEY8 返回，KEY15 主页，KEY13 重播本页音频；KEY2 暂停/继续，KEY3 静音，KEY1/0 音量减/加。答题先选选项，再移动到提交按钮确认；返回重答不会重复加分，结果页重新学习才清空成绩。

以下保留旧媒体版本及安路 TD 操作说明；其中旧键位、串口诊断格式以本页上方和新平台说明为准。

更新：2026-10-29。适用于当前DMZ_EG4S20统一主工程及P7已验证版本。

## 1. 使用方式与准备

系统从TF卡读取图片和WAV，由FPGA自主处理并经HDMI输出；下载后用板载按键操作，无需电脑参与媒体处理。当前程序下载到SRAM，断电丢失配置，下次上电需要重新下载。Flash固化已列为后续交付项，当前未完成。

准备板卡及配套底板、供电、TF卡、HDMI线和带声音输出的显示设备。重新下载还需电脑及JTAG USB；UART2USB仅供开发诊断，不是下载接口。

| 素材 | 要求 |
|---|---|
| TF卡 | FAT16/FAT32，文件放根目录，建议8.3短文件名 |
| BMP | 最多32张，24/32位未压缩BI_RGB，宽1～1920、高1～1080 |
| WAV | 最多16个，PCM、48kHz、16位、小端、双声道 |

例如PIC01.BMP、DEMO.WAV。改变扩展名不等于转换格式。文件按目录扫描顺序索引，不保证按名字排序。图片等比缩放、居中留边，输出固定640×480；默认图片自动轮播、首个支持的WAV循环播放。

## 2. 安路Tang Dynasty软件

### 2.1 打开已有工程

本机启动程序：`D:\ANLU\bin\td.exe`。当前软件为TD 6.2系列。

选择File → Open Project，打开：

```text
D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\build_system\dmz_track1.al
```

不要新建工程。检查工程名dmz_track1、系列EG4、器件EG4S20BG256、顶层dmz_track1_top。如果出现Flow Step Recovery提示，可点OK恢复已有编译流程记录，等待结束；它本身不是报错。

### 2.2 认识界面

| 区域或标签 | 用途 |
|---|---|
| 左上Hierarchy Navigation | 查看器件、模块层级、源代码和约束 |
| Hierarchy / dmz_track1_top | 展开看内部模块，双击查看代码 |
| Constraints / dmz_p3.adc | 引脚与电气约束，已验证，普通使用无需修改 |
| Constraints / dmz_p3.sdc | 时钟与时序约束，普通使用无需修改 |
| 中间编辑区 | 显示代码或报告；未打开文件时为灰色背景 |
| 左下FPGA Flow | 编译流程及报告入口 |
| Flow Runs | 编译任务状态、资源、时序和进度 |
| Active Run Log | 当前任务日志 |
| Tcl Console | 输入命令和查看命令输出 |
| Log Tree / Search | 分类日志和搜索结果 |

顶部File/Edit/View/Project/Source/Process/Tools/Window/Help分别为文件、编辑、视图、工程、源文件、流程、工具、窗口、帮助。ChipWatcher/ChipProbe是调试工具，普通播放无需使用。

本机未确认存在TD中文界面切换或官方汉化包，不将更换软件作为使用前提。配套手册：`D:\ANLU\doc\TD_User_Guide_V6.2.pdf`。

### 2.3 查看与修改代码

双击源文件查看，编辑后保存。关键模块：

| 文件 | 用途 |
|---|---|
| rtl/system/dmz_track1_top.sv | 唯一整机顶层 |
| rtl/system/dmz_osd.sv | 字幕、菜单、状态文字绘制 |
| rtl/system/dmz_media_control.sv | 播放、音量、静音控制 |
| rtl/system/dmz_scene_control.sv | 应急与可视化模式控制 |
| rtl/media/dmz_bmp_decoder.sv | 图片解析、缩放 |
| rtl/media/dmz_wav_player.sv | WAV播放 |

新增源文件时，还需同步主工程及scripts/build_system.tcl中的文件列表，保持界面与脚本构建一致。仅日常演示不需要改代码或重新编译。

### 2.4 编译与检查

流程为保存代码 → 综合 → 布局布线 → 生成位流。

| FPGA Flow名称 | 含义 |
|---|---|
| Read Design | 读取设计 |
| Optimize RTL / Optimize Gate | RTL与门级综合优化 |
| Optimize Placement / Optimize Routing | 布局、布线优化 |
| Generate Bitstream | 生成下载文件 |
| Design Summary / Utilization Summary | 资源占用报告 |
| Physical Report | 布局布线后的资源报告 |

可在流程窗口运行对应步骤。为复用当前工程严格检查，推荐在项目根目录打开PowerShell执行：

```powershell
.\scripts\project.ps1 -Action Build
```

项目根目录为：

```text
D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1
```

检查是否存在错误、关键警告、时序是否通过以及位流是否更新。不能只凭100%或生成bit文件判断修改正确。已验证P7参考：15735 LUT、7530寄存器、37 BRAM9K、17 DSP、1 PLL，建立裕量1.896ns、保持裕量0.004ns。修改后结果可能变化，须以本次报告为准。

### 2.5 下载到板卡

保持供电，连接板卡右上JTAG USB。准备TF卡和HDMI显示屏。在工程根目录运行：

```powershell
.\scripts\project.ps1 -Action Download
```

也可在TD底部Tcl Console输入下面一条命令，再回车：

```tcl
download -bit {D:/QQdownload/HX4S20_Contest_202606.zip/HX4S20_Contest_202606/dmz_track1/build_system/dmz_track1_Runs/phy_1/dmz_track1.bit} -mode jtag -spd 7 -cable 0
```

路径移动后要相应修改。两种方式任选一种，不要同时下载或在下载未结束时重复执行。

| 日志 | 含义 |
|---|---|
| PRG-2014 Chip validation success | 芯片识别成功，尚不代表全部下载结束 |
| bit_to_vec | 转换下载数据 |
| program -cable ... | 执行JTAG编程 |
| RUN-1003 finish command "download ..." | 下载命令结束，结合错误日志及实际播放判断结果 |
| RUN-1004 used/reserved/peak memory | 电脑端软件内存统计，不是错误，也不是持续测试 |
| Ready、恢复命令输入 | 软件已可接受下一条操作 |

等下载完成再断开连接。下载不等于Flash固化。下载后FPGA自行运行，关闭TD不会停止板卡播放。底部控制台的暂停图标不作为板卡播放暂停键，播放暂停使用KEY2。

### 2.6 可选诊断

接UART2USB后，可在工程根目录执行：

```powershell
.\scripts\project.ps1 -Action Status
```

诊断仅为开发辅助，日常播放不必连接UART，也不需要每次运行全部测试。

## 3. 启动拨码与按键位置

按板卡正面、USB在右侧的方向，拨码向板内为高、向底部板边缘为低。

| 板上标注 | 正常设置与作用 |
|---|---|
| A9，最右 | 向板内运行；向板边缘保持复位 |
| A11，右数第4 | 向板边缘正常；向板内应急 |
| A12，右数第5 | 向板边缘显示可视化；向板内隐藏 |

A12隐藏功能有仿真证据，用户实物确认的是A12低时正常显示。Config按钮不作为媒体操作键。

```text
板卡上方
KEY15  KEY14  KEY13  KEY12
KEY11  KEY10  KEY9   KEY8
KEY7   KEY6   KEY5   KEY4
KEY3   KEY2   KEY1   KEY0
板卡下方
```

每次单按并松开，长按只触发一次，避免多键同时按。

## 4. 日常播放与文件菜单

| 按键 | 功能 |
|---|---|
| KEY0 / KEY1 | 下一张/上一张，停止自动切图，WAV继续 |
| KEY2 | 音画暂停/恢复；运行时间和字幕仍继续 |
| KEY3 | 静音/恢复；播放进度仍继续 |
| KEY4 / KEY5 | 音量减/加，0～8档 |
| KEY6 | 恢复自动轮播及音频播放 |
| KEY7 | 重扫TF并重新初始化媒体播放，允许短暂等待与断音 |
| KEY8 / KEY9 | 仅暂停/恢复音频 |
| KEY10 | 选择WAV音源并恢复声音 |
| KEY11 | 打开/关闭文件菜单 |

菜单打开后，用KEY13选择BMP/WAV分类、KEY15/14浏览下一/上一项、KEY12确认。菜单浏览暂停自动切图但音频继续；选WAV从头播放，允许短暂静音。当前所选音轨循环，不是自动播放全部音轨。需要回自动模式按KEY6。

| 最上排按键 | 菜单关闭 | 菜单打开 |
|---|---|---|
| KEY15 | 亮度增加 | 下一个文件 |
| KEY14 | 亮度减少 | 上一个文件 |
| KEY13 | 对比度循环 | BMP/WAV分类 |
| KEY12 | 亮度/对比度恢复4/4 | 确认选择 |

亮度与对比度均0～8档，默认4/4保持原图，不改TF文件。亮度改变整体明暗，对比度改变亮暗差异。音量增益和显示屏声音设置按用户指示保留，不主动提高。

## 5. 屏幕内容与应急

OSD是叠加的屏幕文字、参数和菜单。UPTIME为运行时间，不是真实日期时钟。字幕是板内固定标语，不能直接放TXT文件替换。图片切换为左向右擦除；宽图上下留边、竖图左右留边、小图放大均可能正常。

音频可视化是实际输出PCM的左声道波形及左右电平/峰值，不是FFT频谱。静音后电平归零，峰值逐渐回落。

A11向板内进入红色应急页面和间歇提示音，正常WAV消费暂停以保留位置；A11向板边缘退出，恢复原播放/暂停和静音状态。提示音遵守音量和静音，KEY3可静音。应急物理开关高时优先；普通用户无需软件命令。

## 6. 更换素材、暂停与结束

推荐断电后取卡、复制素材、插回、上电并重新下载。已经换卡并插好后可用KEY7重扫；不能将重扫等同于已支持任意带电插拔。

- 暂停稍后继续：KEY2，再按恢复。处于应急时先用A11退出。
- 只关声音：KEY3。
- 让系统保持复位：A9向板边缘；回到板内后重新开始，不是保留进度的暂停。
- 结束使用：下载已结束后可关闭TD、断开板卡电源。保存过的代码、TF素材不丢失；下次重新下载。

## 7. 常见情况

| 现象 | 检查 |
|---|---|
| 无画面 | 电源、HDMI输入、A9运行、断电后是否重新下载 |
| 有画面无声 | 静音、0音量、音频暂停、WAV格式、显示屏声音设置 |
| 不自动切图 | 关闭菜单，按KEY6恢复；手动切图会停自动轮播 |
| 红色应急页 | A11向板边缘退出 |
| 无波形/电平 | A12位置、是否静音或无实际声音；小幅度声音显示变化也小 |
| 新文件未出现 | 根目录、格式、短文件名、数量上限，再KEY7重扫 |
| TD只有灰色背景 | 双击源文件或报告打开；灰色背景本身不是故障 |
| 内存统计停在日志末尾 | 它不是持续测试；检查下载finish记录及Ready状态 |

## 8. 工程与资料入口

- 主工程：build_system/dmz_track1.al；唯一顶层：rtl/system/dmz_track1_top.sv。
- 当前位流：build_system/dmz_track1_Runs/phy_1/dmz_track1.bit。
- 已验证归档：releases/p7_20261028；证据：docs/p7_validation.json。
- 项目总览：[README](../README.md)；交接：[README_AI_HANDOFF](../README_AI_HANDOFF.md)。
- 当前范围以README顶部最新裁定为准：满足所提供赛题明确要求，不自动追加Flash固化或无关测试。
