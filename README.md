# DMZ FPGA 多媒体展示系统

## 当前开发版（2026-11-02，已下载SRAM，未固化）

统一主工程已完成本轮实拍问题修正并下载SRAM：蓝色背景恢复、红色警示页恢复、讲解可重复重播，三个音源和实时波形可用，KEY4结束警示与KEY8返回第三讲均已由用户确认。板端16页课件自动流程通过，最终计分2/3，配置/SD/BMP/WAV错误为0。当前时序setup +0.266ns、hold +0.030ns，LUT16089、BRAM62。位流SHA256：25e1fc49f83a81bdd24e7bcb0c524005cb3921b735ecee7b4adb6d472b03cba9。未写Flash。证据见 docs/platform_v2_board_validation.json 和 docs/platform_runtime_validation_boardfix.json。

使用说明及工程结构见[配置交互平台说明](docs/PLATFORM_RUNTIME.md)，键位见[平台按键说明](docs/PLATFORM_KEYS.md)。唯一主工程仍是 build_system/dmz_track1.al。课件素材包在 assets/platform/tf_course_v2，另一套配置在 assets/platform/tf_notice_v2；同一 TF 卡根目录只使用一份 SCENE.BIN。没有有效配置时保留媒体兼容模式。

板卡、COM9、JTAG、HDMI 和新课件 TF 卡现已连接；本轮先完成 SRAM 课件验收，未执行 Flash 擦写。音量继续保留 0～8 档及原增益；最终响度上限受扩展屏音量设置限制。

文档统一入口：[工作区文档导航](docs/DOCUMENT_INDEX.md)。

## 最终目标声明（2026-11-01，优先于下方旧定位）

**基于FPGA的可配置交互多媒体演示平台，以“声音与音色”教学课件展示能力。**

现行要求见[最终目标与实施边界](docs/PROJECT_GOALS_LOCKED.md)。页面、图层、控件及动作通过TF资源和配置组合，在支持范围内更换课件无需重编译FPGA；首套教学模板不限制其他页面布局。三分钟演示视频，完整操作流程可更长。配置化平台、按钮图层与课程组件已接入主工程并完成软件整合验证；本批硬件验收尚未完成。Flash固化及断电自动启动已由用户追加为最终交付项（2026-11-01），当前待实现、待实板验收；这是用户工程要求，不是赛题原文的强制条款。

当前配对版已于2026-11-01完成四组索引实板检查，用户反馈“切换较快”；旧文中的“无硬件测试”仅指此前开发阶段，精确同步时差仍未测。

当前配对功能变更及验证边界见[配对播放说明](docs/PAIRED_PLAYBACK.md)。KEY10已增加配对模式切换，下方旧说明以此变更为准；默认背景模式，本次无硬件测试。

完整操作入口：[用户使用说明（含安路TD软件、下载、按键与常见问题）](USER_GUIDE.md)。

## 当前范围裁定（2026-10-28，用户最新指示）

用户明确要求：“满足赛题一明确要求即可。”本节优先于下文所有历史计划中“必须非易失启动”“下一步P8固化”等表述。

- 以用户提供的赛题一1.2～1.6为验收依据：指定FPGA平台、明确多媒体应用场景、所有算法/控制/数据处理在FPGA实现、外围无额外处理器，以及核心功能、显示稳定性、基础音频和工程规范性。
- Flash固化、掉电后自动冷启动不是所提供赛题的明确必做项，移出必做范围；不自动推进P8固化或追加完整脱机冷启动验收。当前仅SRAM下载，断电配置丢失，重新上电需下载，不能宣称已固化。
- 下载后媒体读取、解析、播放和板载交互均由FPGA完成；电脑可供电，开发时可用于下载/诊断，不参与运行时算法处理。
- 五项扩展属于可选加分项，当前已集成并实物确认字幕/图层、转场、缩放、参数调节与OSD、实际PCM可视化；保留成果，无需另设新增门槛。应急模式也已实物确认。
- 当前同一主工程作为交付基线。只在出现相关故障或明确新增需求时继续修改和针对性验证，不重复无关基础测试。已有证据表明功能覆盖所提供要求，最终竞赛评定由评委决定。


**最新P7：已集成实际输出PCM波形/左右电平与A11应急模式，程序及用户屏幕/拨码实物确认均通过；证据见docs/p7_validation.json。操作见[可视化与应急说明](docs/P7_VISUAL_EMERGENCY.md)。**

更新：2026-10-28。硬件：大拇指DMZ_EG4S20 / 安路EG4S20BG256，配套综合底板提供TF与HDMI接口。

当前已在实板完成图片/WAV播放、板载按键、文件菜单、OSD、运行时间、滚动字幕、亮度/对比度、等比缩放和水平擦除转场。最新P6验收：7张图片轮播正常，缩放和方向正确，音频连续，相关错误及欠载为零。证据：[P6验证摘要](docs/p6_validation.json)。

## 统一主工程

所有功能在同一主工程中增量集成，下载一份位流即可同时运行。音频可视化和应急模式也已接入这个主工程。

| 入口 | 路径 | 说明 |
|---|---|---|
| TD主工程 | `build_system/dmz_track1.al` | 当前整机工程 |
| 唯一整机顶层 | `rtl/system/dmz_track1_top.sv` | 连接时钟、存储、音画、控制和显示 |
| 当前位流 | `build_system/dmz_track1_Runs/phy_1/dmz_track1.bit` | 整机配置文件 |
| 构建入口 | `scripts/build_system.ps1` | 综合、布局布线、生成位流并检查时序 |
| 下载入口 | `scripts/download_system.ps1` | 下载到FPGA SRAM |
| 控制入口 | `scripts/project.ps1` | 开发阶段构建、下载、诊断与控制 |

`sim/`内的模块测试用于定位问题；历史`build*`目录和`releases/`用于保存早期验证或回退。它们不需要分别下载拼成最终演示，也不是后续功能开发的主入口。

## 目录结构与职责

```text
dmz_track1/
├─ rtl/                         FPGA逻辑源码
│  ├─ system/                   顶层、按键、菜单、媒体控制、OSD及图像参数
│  ├─ media/                    FAT文件服务、BMP缩放、WAV播放与SD仲裁
│  ├─ p3/                       SD SPI接口、双帧缓存与擦除转场
│  ├─ p2/                       SDRAM控制/自检、异步FIFO、状态发送
│  └─ p1/                       HDMI协议、TMDS编码、串行输出与测试音
├─ constraints/                 引脚、电气与时钟约束
├─ build_system/                TD主工程、构建结果和当前整机位流
├─ scripts/                     构建、下载、开发控制与验证脚本
├─ sim/                         模块/集成仿真、存储模型及参考数据
├─ assets/                      素材；p6/为不同尺寸缩放校准BMP
├─ docs/                        结构、需求、操作、进度及验证证据
├─ releases/                    阶段源码/位流/时序/manifest回退归档
├─ README.md                    本说明
└─ README_AI_HANDOFF.md          后续AI接续入口，先读最新章节
```

| 主要源码 | 职责 |
|---|---|
| `rtl/media/dmz_fat_catalog.sv` | 挂载FAT16/32、建立图片/音轨索引、查询文件名 |
| `rtl/media/dmz_fat_stream.sv` | 按簇链提供独立文件字节流，处理反压与取消 |
| `rtl/media/dmz_sd_arbiter.sv` | 共享SD主机，音频缓冲低水位时优先供数 |
| `rtl/media/dmz_bmp_decoder.sv`、`dmz_udiv32.sv` | BMP解析、行缓存、比例计算与等比最近邻缩放 |
| `rtl/media/dmz_wav_decoder.sv`、`dmz_wav_player.sv` | WAV PCM解析、选轨、循环与安全重启 |
| `rtl/p3/dmz_image_framebuffer.sv` | 完整帧提交、读写仲裁和旧/新帧擦除转场 |
| `rtl/p2/dmz_sdram_ctrl.sv`、`dmz_pixel_fifo.sv` | SDRAM时序及跨时钟像素/音频/命令缓冲 |
| `rtl/system/dmz_matrix_keys.sv`、`dmz_board_commands.sv` | 矩阵扫描、消抖、按键映射与开发UART仲裁 |
| `rtl/system/dmz_file_menu.sv`、`dmz_gallery_control.sv`、`dmz_media_control.sv` | 文件选择、图片调度、音源/暂停/音量控制 |
| `rtl/system/dmz_display_control.sv`、`dmz_picture_adjust.sv`、`dmz_osd.sv` | 运行时间、亮度/对比度、菜单/状态及滚动字幕叠加 |
| `rtl/p1/hdmi_core/`、`serializer.sv` | HDMI音视频封装、TMDS编码与EG4串行输出 |

## 整机数据流

```mermaid
flowchart LR
 TF[TF卡] --> SD[SD SPI与CRC]
 SD --> FS[FAT目录和独立文件流]
 FS --> BMP[BMP解析与等比缩放]
 BMP --> FB[SDRAM双帧缓存与擦除转场]
 FB --> PIX[像素FIFO与亮度/对比度]
 PIX --> OSD[菜单/状态/时间/滚动字幕]
 FS --> WAV[WAV PCM解析]
 WAV --> AUDIO[音频FIFO与音量控制]
 OSD --> HDMI[同一HDMI输出]
 AUDIO --> HDMI
 AUDIO --> VIS[实际PCM波形/电平]
 VIS --> OSD
 KEYS[板载按键] --> CTRL[文件菜单与播放控制]
 CTRL --> FS
 CTRL --> PIX
 CTRL --> AUDIO
```

图片在后台完整加载，显示读取前台；新图就绪才开始擦除，转场结束才交换帧身份，避免覆盖正在显示的内容。缩放仅需一行源图缓存。音频有独立FIFO并优先获得低水位供数，浏览菜单/加载图片/转场不依赖电脑提供素材。OSD实时叠加，不修改原BMP。

输出固定640×480约59.524Hz。像素时钟25MHz、串行125MHz、SDRAM控制50MHz。板内8MiB SDRAM，两帧RGB565的字节基址为0和0x100000，每帧614400字节。HDMI协议核为MIT复用，PLL/SDRAM使用安路器件资源，详见[来源说明](docs/THIRD_PARTY.md)。

## 当前文件与操作范围

- TF卡使用FAT16/32，根目录8.3短文件名；最多32张BMP、16个WAV，按目录顺序索引。
- BMP：宽1～1920、高1～1080，24/32位未压缩BI_RGB；等比最近邻缩放、居中留边，正/负高度均支持。1920×1080上限已逐像素仿真；实卡验证640×480、960×540、241×481和160×120。
- WAV：PCM、48kHz、16位、小端、双声道。默认首个循环，菜单可选择；手动切换音轨从头播放，允许短暂静音。图片切换保持背景音频连续。
- 默认有声自动轮播，音量0～8档。用户要求保留现有音频增益和扩展屏音量设置。
- KEY0/1切图、KEY2暂停/恢复、KEY3静音、KEY4/5音量减/加、KEY6自动、KEY7重扫、KEY11菜单。
- 菜单内：KEY15/14下一/上一项、KEY13分类、KEY12确认。菜单外：KEY15/14亮度加/减、KEY13对比度循环、KEY12恢复4/4。
- 亮度/对比度默认4/4保持原图。UPTIME是运行时间而非真实时钟；字幕为板内固定标语。更多操作见[按键说明](docs/DMZ_BOARD_CONTROLS.md)。

## 构建、验证与当前状态

在本目录运行：

```powershell
./scripts/project.ps1 -Action Build
./scripts/project.ps1 -Action Download
./scripts/project.ps1 -Action Status
```

开发电脑可用于编译、下载、发送调试命令和读取状态；运行时扫描、解析、控制与音画处理均由FPGA完成。最终验收使用板载操作，不依赖电脑软件，允许电脑仅供电。**目前仅SRAM配置，尚未写入非易失启动介质；掉电后不能直接保留当前配置。**

当前P6构建：15735 LUT、7530寄存器、37 BRAM9K、17 DSP、1 PLL；建立裕量+1.896ns、保持裕量+0.004ns。后续改动必须重新检查资源与时序。最新已验证回退版本为`releases/p7_20261028/`（以P7验证摘要确认状态为准）。

仅运行受改动影响的必要验证，不重复未受影响的一般基础测试。测试入口包括`test_scaler.ps1`、`test_wipe.ps1`、`test_media.ps1`、`test_display.ps1`、`test_osd_menu.ps1`。仿真、构建、实板数据和用户视觉/听音确认分别记录。

后续任务：非易失启动以及完整板端场景验收。P7实际PCM可视化与应急模式的最终实物确认见p7_validation.json。当前尚未完成全部项目目标。

- [固定项目目标](docs/PROJECT_GOALS_LOCKED.md)
- [工程结构、参数与算法详解](docs/ENGINEERING_STRUCTURE.md)
- [当前进度](docs/PROJECT_PROGRESS.md)
- [后续AI接手说明](README_AI_HANDOFF.md)


## 历史清理（2026-10-31）

早期build、build_audio_test、build_p1～p3及P6和更早阶段归档已删除；当前统一工程build_system、源码/约束/脚本/仿真依赖保留。有效归档为releases/p7_20261028（实物基线）和releases/paired_20261031（软件验证，未上板）。旧文档中的已删除路径不作为可用入口。
