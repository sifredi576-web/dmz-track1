# 后续 AI 接手说明

## 当前范围裁定（2026-10-28，用户最新指示）

用户明确要求：“满足赛题一明确要求即可。”本节优先于下文所有历史计划中“必须非易失启动”“下一步P8固化”等表述。

- 以用户提供的赛题一1.2～1.6为验收依据：指定FPGA平台、明确多媒体应用场景、所有算法/控制/数据处理在FPGA实现、外围无额外处理器，以及核心功能、显示稳定性、基础音频和工程规范性。
- Flash固化、掉电后自动冷启动不是所提供赛题的明确必做项，移出必做范围；不自动推进P8固化或追加完整脱机冷启动验收。当前仅SRAM下载，断电配置丢失，重新上电需下载，不能宣称已固化。
- 下载后媒体读取、解析、播放和板载交互均由FPGA完成；电脑可供电，开发时可用于下载/诊断，不参与运行时算法处理。
- 五项扩展属于可选加分项，当前已集成并实物确认字幕/图层、转场、缩放、参数调节与OSD、实际PCM可视化；保留成果，无需另设新增门槛。应急模式也已实物确认。
- 当前同一主工程作为交付基线。只在出现相关故障或明确新增需求时继续修改和针对性验证，不重复无关基础测试。已有证据表明功能覆盖所提供要求，最终竞赛评定由评委决定。



## 当前最新：P7可视化与应急模式已实物验收（2026-10-28）

本节优先于下方历史。当前板上为P7版，非旧P6版；全部功能仍同一顶层/TD工程。用户已确认“可视化、应急进入及退出恢复均正常”。结束复核：7图有声自动轮播、可视化开启、应急关闭、无静音/暂停，音画欠载/SD/WAV错误0。当前五项扩展的本项目基本实现均已上板确认；不是全部项目完结，下一步P8非易失启动及最终独立场景验收，尚未写Flash。

- 新模块dmz_audio_visual直接旁路HDMI aw[0]/aw[1]（音量/静音后）：128点左声道波形，每16样本抽取、双页消隐交换，左右5位绝对峰值电平及衰减峰值。37 BRAM中新增1块，不反压音频。不是FFT或RMS/dB计；降采样波形有混叠，静音后新页归零。
- 新模块dmz_scene_control：A11=SW3（右起第4）高应急/低退出，A12=SW4（右起第5）高隐藏可视化/低显示。最右A9仍运行/复位，不能误拨。用户板卡只容易看到引脚号，指导时优先说A11/A12而非只说SW3/4。
- 开发命令Q/X软件进入/退出，Z切换可视化；A11高优先，X不能越过物理高。原16键映射不变。退出恢复原正常音源与播放/暂停、静音/音量状态；背景图片轮播在应急中继续，WAV FIFO消费停住保留位置。
- 应急页面板内生成红色图文/专用疏散滚动文字，1kHz提示音约0.5秒响/0.5秒静音。提示音用原有音量且遵守静音，不提高输出增益。正常暂停仅针对WAV，应急提示优先，KEY3仍能静音。scene节奏计数器必须25位（每秒25000000拍），不要缩成24位。
- 状态T1ST仍v4/96字节，word22原保留bit27=emergency、bit26=visual_enabled；word14原保留低8位=左右各4位电平（内部5位右移1）。命令/计数位不变。scripts/system_console.ps1已支持Q/X/Z与新字段。wav_source仍指正常源，应急flag优先说明实际输出源。
- 测试：test_scene_visual覆盖帧切换、物理优先、节奏、-32768、双声道峰值/波形页、静音/衰减、隐藏；test_osd_menu正常回归与应急预览；test_p7_board真实HDMI非零计数/静音归零、应急保留WAV位置、提示音、应急静音、退出续播、可视化开关全部通过。
- 程序实测应急时played_pairs保持789644，退出增长；不是重置/从头再播。用户另已操作A11确认真实画面/声音及恢复，图形实际变化已确认。docs/emergency_preview.png为仿真预览，不是实拍。
- 最终时序setup +1.896ns、hold +0.004ns，15735 LUT（80.28%）、7530寄存器、37 BRAM9K、17 DSP、1 PLL。后续新增须查时序/资源；不放宽约束，不重复未受影响的基础测试。
- 文档docs/P7_VISUAL_EMERGENCY.md，证据docs/p7_validation.json，回退releases/p7_20261028。README结构和进度已更新。当前有声且音量/增益保持原设置，用户要求不主动调大扩展屏或音频增益。
- 继续保留P6缩放/转场、显示参数、菜单/控制和所有已验证硬件约束。非易失部署前核对板载Flash/配置方式与恢复路径，不能把SRAM下载当成冷启动完成；仅做必要验证和最终场景，无需每阶段固定长测。

## 以下为历史阶段记录


## 当前最新：P6转场与自适应缩放已实物验收（2026-10-28）

本节优先于下方所有历史记录。用户最新请求已完成：先解释对比度与工程结构，再完成P6。说明文档docs/ENGINEERING_STRUCTURE.md。当前主工程已完成TF图片/WAV、板载按键、文件菜单、OSD、运行时间、滚动字幕、亮度/对比度，以及本轮等比缩放/水平擦除。下一步P7实际PCM波形/电平与应急模式，最后P8非易失启动与完整板端验收。不要重做已通过且未受改动影响的基础测试。

- 当前板上为P6版，默认有声自动轮播；音量范围/增益保持，用户要求不主动调大。电脑可仅供电，开发串口允许，最终板载控制；全部运行处理在FPGA内。
- BMP输入宽1～1920、高1～1080、24/32位BI_RGB，根目录8.3，输出仍640×480。按比例最近邻、居中黑边，奇数行补齐、偏移、正/负高度均支持。不是双线性。
- 新dmz_bmp_decoder使用2048×16同步源行缓存（强制块RAM），扩大重复行/缩小跳行；32周期dmz_udiv32只在比例初始化使用，像素采样误差累加。不缓存整张原图。保持row_cache的同步独立读写模板和fehdl force_ram/ram_style=bram，曾被工具错误映射到LUT导致接近96%无法实现；修正后36BRAM、LUT约76%。
- 源文件全部像素与补齐读完后才发最后一突发。不能将最后一输出行提前提交，否则截断FAT链可能显示半图。当前所有新图均完整307200像素后提交；坏文件保留旧图。
- framebuffer新增rd_x/wipe_words/transition_active。首次图直接出，后续back_ready后20帧逐帧推进32像素水平擦除；每突发只读一帧，不翻倍带宽。back_ready在整个转场保持，结束才swap并允许加载新后台。不能提前清back_ready或提前增加swaps。
- 用户复制了assets/p6三张原尺寸校准BMP到TF：960×540横图、241×481竖图、160×120小图，连原4图共7图。p6_gallery_cycle实板48秒记录全部7个索引，SD/WAV/图片错误及音画欠载0。用户明确确认“转场、缩放和方向均正常，音频连续”。1920×1080上限为逐像素仿真验证，未冒称实卡所有尺寸均验收。
- 测试：test_scaler（1×1、321×241、479×640、1920×1080、637×479/32位、640×479及截断，逐像素/留边/反压）、test_wipe（20阶段bank地址、禁止提前commit与覆盖）、test_media（原生640/32位和共享WAV并发相关回归）均通过。test_wipe须--unroll-count 1，Verilator5.036曾错误优化被另一进程观察的循环变量，默认展开会产生假失败；握手激励必须在真正posedge接受后撤valid。
- 当前最终时序setup +1.201ns、hold +0.004ns、STA100%；14850 LUT、7461寄存器、36 BRAM9K、17 DSP、1 PLL。保持裕量小，后续任何更改重新跑时序，不放宽约束。
- 证据docs/p6_validation.json；当前位流/源码/时序/manifest归档releases/p6_20261028。旧display/osd/keys/av归档仍保留。仅SRAM下载，未写Flash、未commit/push，不reset/clean工作区。
- 主入口rtl/system/dmz_track1_top.sv、build_system/dmz_track1.al、scripts/build_system.ps1。SDRAM实板READ_WAIT=1、理想引脚仿真=2；帧基址0和0x100000为字节地址。SW0高运行低复位；Config不是媒体键。HDMI固定输出，无FPGA DDC/HPD。
- 按键：KEY0/1切图，KEY2暂停/恢复，KEY3静音，KEY4/5音量减加，KEY6自动，KEY7重扫，KEY8/9音频暂停/恢复，KEY10选WAV；KEY11菜单。菜单内KEY15/14下一/上一、KEY13分类、KEY12确认；菜单外KEY15/14亮度加减、KEY13对比度循环、KEY12恢复4/4。运行时间/参数在R重扫保持，SW0/重下载清零。

## 以下为历史阶段记录


## 当前入口：OSD与文件菜单（2026-10-28最新）

此节优先于下方历史记录。主工程已新增屏幕状态OSD、BMP/WAV分类浏览与确认选择；最多32图/16音轨，8.3根目录顺序。默认首图+首WAV有声轮播，音量仍0～8，增益未改。用户说可听音量上限受扩展屏设置限制，仅记录，不主动调增益或屏幕音量。电脑可仅供电，开发可发串口命令，最终由板载操作；算法仍全在FPGA运行。

- 操作：KEY11菜单（第二排左）、KEY15/14下/上一项（顶排左一/左二）、KEY13分类（顶排左三）、KEY12确认（顶排最右）；KEY6恢复自动。原KEY0～KEY10保留。菜单打开暂停自动换图，WAV继续；浏览只查目录元数据，确认才读选中文件；确认WAV会先排空旧SD事务并清空FIFO，从头播放。WAV切换的短静音与图片切换不断音是两个不同验收条件。
- 文档：docs/OSD_MENU_STATUS.md、docs/PROJECT_PROGRESS.md、docs/DMZ_BOARD_CONTROLS.md。只新增状态OSD和菜单，滚动字幕/运行时间、亮度/对比度尚未完成，不能把E1/E4整体标完成。
- 最新RTL：dmz_file_menu、dmz_osd；catalog增加独立查询端口/16WAV表；wav_player增加选择取消/排空；顶层使用反向查询CDC及116位响应快照，音频独立FIFO复位。OSD两周期坐标预计算，原RGB仍一周期，不能随意加延迟。
- 媒体命令跨域已由原toggle+held改为dmz_pixel_fifo AW=2的四项队列，避免紧邻命令跨域时总线提前变化；不要退回旧结构。输入最大突发两条（UART与按键碰撞），测试300条错相突发精确通过。
- 新串口F/I/O/V/E；E回报实际索引命令（BMP 0x80..9f/WAV 0xc0..cf）。脚本支持，project.ps1新增Menu/MenuPrevious/MenuNext/MenuType/MenuSelect。
- 状态仍T1ST v4/96字节，word22低8位不变；31:28音轨、23目录ready、22菜单、21:16查询、15:11音轨数。菜单查询bit5为WAV，低5位索引。见说明。
- 最终构建/下载已完成：setup +1.389ns、hold +0.075ns，STA100%；13751 LUT、7078寄存器、32 BRAM9K、10 DSP、1 PLL。当前板上是本轮OSD版，不是旧keys/av归档。
- 仿真通过：test_osd_menu（栅格、字形、边界、空/过期查询、到gallery的直接选择）、test_media（所有原相关案例+双WAV精确采样/取消/反压/同文件重启）、test_board_keys、test_command_fifo。对应docs/*_result.txt。docs/osd_menu_preview.png是仿真预览，不冒充HDMI实拍。
- 实卡test_osd_board已通过：4图+1WAV、游标首尾循环、选中图提交、WAV重启，音画欠载/SD/WAV错误0。真实多音轨切换尚未实测，只有双文件仿真。已向用户请求实际屏幕文字/文件名和KEY15+KEY12选择确认，当前确认状态以docs/osd_menu_validation.json为准；不要把脚本通过视为实体菜单已确认。
- 当前脚本停在BMP菜单打开、WAV播放状态以供观察；后续若用户已完成确认，可关闭菜单并恢复有声轮播（先读状态，F只在打开时发，再A）。不得擅自静音。
- 下一步：完成用户确认/归档后继续P5滚动字幕、运行时间和亮度/对比度；再P6转场/缩放、P7实际PCM可视化/应急、P8非易失启动与独立场景。不要重做未受改动影响的基础测试。
- 工具/硬件关键旧约束仍有效：TD D:/ANLU，MSYS Verilator；实板SDRAM READ_WAIT=1、理想引脚仿真=2；SW0高运行低复位，Config不是普通操作键；HDMI无FPGA DDC/HPD。仅SRAM、未写Flash、未提交/推送，不能reset/clean现有工作区。
- TD对实例端口中引用后声明的信号会产生HDL-7225隐式标量警告，尤其volume、command_byte；必须在实例前声明并检查关键警告，不能以成功生成位流忽略警告。当前最终构建已通过严格脚本。

## 以下为此前阶段记录

**最新澄清：电脑可仅供电，开发测试允许电脑发命令，最终验收转为板载按键。无需停止现有串口测试；读取、解析和音画处理仍全部在FPGA中完成。此前“断开电脑”指无电脑数据/控制依赖。用户已再次换入合规DEMO.WAV，最新测试见docs/av_corrected_validation.json。**

**最高优先级目标（2026-10-28用户确认）：先读 [固定项目目标](docs/PROJECT_GOALS_LOCKED.md)。最终脱离电脑独立启动，测试/演示素材由板卡与TF卡提供，文件扫描、格式诊断、选择和播放控制均在板端完成。UART仅为开发辅助。下一步优先板载控制、文件菜单/重扫、OSD与TF文件头诊断；不得将复制到电脑解析/转码作为必要流程。五项扩展及非易失启动仍须交付。下文较早的“下一步先字幕”按此顺序修正。**


更新：2026-10-28。当前已完成共享FAT文件服务与TF卡WAV音画播放，下一阶段是字幕与参数OSD。先读本文件，再读 `docs/AV_INTEGRATION_STATUS.md` 和 `docs/PROJECT_PROGRESS.md`。

## 用户最新要求

- 仅处理技术实现，不讨论参赛资格。硬件是大拇指DMZ_EG4S20 / EG4S20BG256，不是推荐HX4S20C。
- 直接推进最终功能；不补与目标无关的一般基础检查，不重复未受改动影响的测试，不每阶段做固定30分钟长测。
- **2026-10-28用户已放入WAV，并明确无需保持默认静音。当前默认图片轮播 + WAV有声播放，音量8/8。** 此要求取代此前静音偏好，结束时不要擅自静音。
- 所有运行时扫描、解析、调度和输出在FPGA内完成；PC只用于构建、下载和控制验证。HDMI协议核为MIT复用，见THIRD_PARTY，不能称全部原创。
- 仅SRAM下载，未写Flash；不要丢弃现有工作区修改，不要reset/clean。

## 当前结果与证据

- 主工程 `build_system/dmz_track1.al`，顶层 `rtl/system/dmz_track1_top.sv`。
- FAT16/FAT32根目录最多32张BMP索引，上一张/下一张、自动轮播与暂停已完成。实卡4张图，完整帧后台写完后消隐提交，切图期间旧图继续显示。
- 共享挂载/目录服务，图片和音频两套复用文件流上下文，单个SD主机和音频低水位优先仲裁已完成；不再用耦合的旧BMP加载器作主工程入口。
- 第一张WAV支持PCM 48kHz/16位/双声道，接入4096对异步PCM FIFO、HDMI、循环、音量和暂停。实际文件1536044字节（DEMO.WAV，8秒）。
- 联动验证记录：WAV已循环32次，音频/画面欠载、SD/WAV/SDRAM错误全0；切图时采样持续增长；H暂停后播放位置保持，A恢复；音量7/8→8/8通过。结束复核仍在继续播放，详见 `docs/av_final_status.json`。
- **用户确认：声音连续，切图画面正常。** `docs/av_validation_summary.json`和`docs/av_board_test_log.txt`是本轮结论。
- 最终时序：建立+1.504ns、保持+0.004ns，STA覆盖99.99%，含SDRAM硬宏；12041 LUT、6350寄存器、32 BRAM9K、10 DSP、1 PLL。后续新增功能须重查时序，尤其保持裕量较小。
- 旧v2的30分钟记录、旧v3图库记录仅是历史，不当作当前v4位流长测。当前只做新功能相关验证。

## 路径与工具

工作区：`D:/QQdownload/HX4S20_Contest_202606.zip/HX4S20_Contest_202606/dmz_track1`。

- TD：`D:/ANLU/bin/td_commands_prompt.exe`，6.2.168116。
- Verilator/Make/g++：`C:/msys64/mingw64/bin`，Verilator 5.036。
- Python：`C:/Users/fushenghe/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/python.exe`；文件读写指定UTF-8。
- CH340近期COM9，之前曾COM3/COM8。工具自动找唯一CH340，必要时用-Port指定；不要把近期端口当永久配置。
- TD有时TCL错误也返回0；构建脚本检查新位流、日志和时序，下载脚本检查器件校验与program完成。

```powershell
./scripts/project.ps1 -Action Build
./scripts/project.ps1 -Action Download
./scripts/project.ps1 -Action Status
./scripts/project.ps1 -Action Next
./scripts/project.ps1 -Action Previous
./scripts/project.ps1 -Action Pause
./scripts/project.ps1 -Action Auto
./scripts/project.ps1 -Action AudioPlay
./scripts/project.ps1 -Action AudioPause
./scripts/project.ps1 -Action AudioResume
./scripts/project.ps1 -Action VolumeDown
./scripts/project.ps1 -Action VolumeUp
./scripts/project.ps1 -Action Mute
./scripts/project.ps1 -Action Tone
```

N/P手动切图并停自动，背景WAV继续；H/A联动暂停/恢复；K/L仅音频暂停/恢复；W选WAV并发声；T选测试音并发声；M静音但时间继续；+/-为0..8线性音量。R重载所有媒体，从文件开头再播。Tone模式保留WAV FIFO位置，切回W继续。参数OSD尚未显示这些状态。

## 关键源码

| 文件/目录 | 作用 |
|---|---|
| rtl/media/dmz_fat_catalog.sv | 挂载、BMP索引、首个WAV与共享卷几何 |
| rtl/media/dmz_fat_stream.sv | 图片/音频复用的独立文件上下文、簇链/扇区缓存/反压/取消 |
| rtl/media/dmz_sd_arbiter.sv | 音频低水位优先，整扇区含CRC不打断 |
| rtl/media/dmz_bmp_decoder.sv, dmz_image_player.sv | 流式BMP到RGB565突发 |
| rtl/media/dmz_wav_decoder.sv, dmz_wav_player.sv | RIFF/PCM、循环、错误锁存 |
| rtl/media/dmz_media_storage.sv | 共享文件服务的板上集成入口 |
| rtl/system/dmz_track1_top.sv | 总集成、两类FIFO、HDMI采样、音量、诊断 |
| rtl/system/dmz_media_control.sv | 源、音量、暂停、命令回报；主工程显式DEFAULT_MODE=1/DEFAULT_WAV=1 |
| rtl/p2 | SDRAM控制、自检、FIFO、诊断发送 |
| rtl/p3/dmz_image_framebuffer.sv | 读优先仲裁、双缓冲与消隐提交 |

SDRAM 8MiB，32位字地址/256bit突发，RGB565帧字节基址0和0x100000。**实板READ_WAIT=1，理想引脚仿真=2**。50MHz内存、25MHz像素、125MHz串行；底板无FPGA DDC/HPD，固定640×480约59.524Hz。Audio FIFO AW=12，低于2048优先读，预填512对后开始消费。没有额外音频处理器。

## 本轮验证入口

- `scripts/test_media.ps1`：并发SD/FAT/BMP/WAV、碎片链、3帧921600像素、逐对PCM与循环、反压；FAT32、FAT16+MBR、32位负高度BMP；错误/截断/无WAV时图片继续。
- `scripts/test_status_uart.ps1`：64/96字节诊断及快照一致性。
- `scripts/test_system_control.ps1`：UART/CDC、源与音量、独立/联动暂停、注册重载。
- `scripts/test_av_board.ps1`：实卡音画联动检查，结束后保持有声轮播。
- 不要重复以上通过项目，除非改动影响相应路径。旧P0～P3、旧gallery和protocol测试保留作针对性回归，不必默认全跑。
- Verilator默认$abort在Windows可能弹CRT窗口，新增测试使用自定义C++main关闭fatalOnError并用退出码报失败。PowerShell不要对标量字符串使用数组展开传测试参数，会拆成单字符；使用明确参数或真正的字符串数组。

## 状态协议及已知边界

T1ST **v4为96字节**，24个小端32位字；第23字XOR。0～14沿用v3；15音频欠载、16播放PCM对、17解码PCM对、18解码循环数、19打包FIFO/WAV状态/错误/发现标志、20音频读数、21WAV文件长、22音量/暂停/源/启动标志。完整位定义见AV状态文档。脚本兼容v2/v3/v4；不要用旧64字节脚本读v4。

目前仅第一张根目录WAV，不支持音轨列表、压缩/浮点/单声道/其他采样率，格式错停止该音轨且图片继续。图像仍是640×480未压缩24/32位BMP，不含缩放或转场。H暂停不会取消已开始的图片加载。还没有字幕、亮度/对比度、OSD、PCM图形、应急模式和完整板载按键菜单。

本轮构建曾遇到复位恢复路径和96字节动态选择器路由问题，分别通过寄存restart和诊断快照顺序移位解决；最终时序通过后才下载。保持这些改动，不要靠放宽时序约束隐藏问题。

## 接续任务

1. **下一步：字幕/参数OSD（E1/E4）**。先固定标题/运行时间、滚动文字、音量及播放状态；再亮度/对比度。保持RGB、坐标和HDMI数据有效延迟一致。
2. 图片擦除/滑动转场、等比最近邻缩放（E2/E3）。双图淡入淡出/双线性先评估带宽及资源。
3. 从实际输出PCM做波形、电平、峰值（E5），再考虑FFT；加入应急图文/提示音模式。
4. 增加板载按键/开关控制及完整场景收尾验收。音轨配对/列表与更精细调度可在基本展示稳定后完善。

回退图库：`& D:/ANLU/bin/td_commands_prompt.exe scripts/restore_gallery.tcl`，位流及源码zip在 `releases/gallery_20261027`。更早基线在 `releases/baseline_20261027`。当前AV版归档到 `releases/av_20261028`；最新源/位流哈希见 `docs/system_manifest.json`。未创建PR、未推送、未写Flash。

## 新音频复测（2026-10-28）
用户替换TF卡中的DEMO音频后再次测试。串口起初无状态，重新SRAM下载当前已验证位流后恢复。识别到新WAV 1764078字节，但fmt校验错误3，decoded/played均0，尚未播放。图片4张、手动切换与自动恢复正常，SD/图片/显示欠载错误0。尚不能确定具体格式字段，已向用户询问电脑原文件路径，以便检查并在需要时生成兼容副本；不要把文件大小推测当成采样率证据。当前保留自动轮播/WAV源/音量8、未静音，但格式错误导致输出静音。证据docs/av_replacement_validation.json。此前原测试音频的成功证据保持不变。

## 合规替换音频复测完成（2026-10-28）
用户重新放入1920044字节DEMO.WAV，R重载后正常解码。4张图、手动切图与恢复自动轮播通过；记录末尾WAV解码循环7次，音频/画面欠载、SD/WAV错误均0。用户确认：“新音频正常，切图无明显断音或花屏”。当前保持有声自动轮播、音量8/8。证据：docs/av_corrected_validation.json及其中列出的实板记录。此前1764078字节文件格式失败仅为历史，当前音频故障已解决；无需再要求用户提供电脑文件路径或重复相同播放测试。下一步按固定目标推进板端交互与OSD等未完成功能；电脑可仅供电，开发阶段允许串口控制。
`n板载控制资料已核对，见docs/DMZ_BOARD_CONTROLS.md（照片位置、手册第7页矩阵行列引脚、SW方向）；矩阵扫描尚未实现，接入前核对IO冲突及行列驱动，不能直接套推荐板卡引脚。

## 板载按键阶段（2026-10-28）
已新增dmz_matrix_keys与dmz_board_commands并接入主工程；KEY0下一张、KEY1上一张、KEY2联动暂停/恢复、KEY3静音切换、KEY4/5音量减/加、KEY6恢复轮播、KEY7整链路重扫、KEY8/9音频暂停/恢复、KEY10选WAV；其余保留。位置和电气细节见docs/DMZ_BOARD_CONTROLS.md。列上拉/逐行拉低，其余行高阻；8帧消抖、单次按下、全释放重臂、多键锁定，扫描器不随媒体R重载复位。UART优先且碰撞按键排队，协议仍为T1ST v4，通过command_count/last_command观察两类命令。
仿真scripts/test_board_keys.ps1覆盖16键、弹跳、长按、多键/鬼键、复位持键和UART碰撞，通过。新构建时序setup +1.422ns、hold +0.076ns，12311 LUT、6435寄存器、32 BRAM9K、10 DSP、1 PLL。已SRAM下载；docs/keys_initial_status.json确认4图+1920044字节WAV正常，错误/欠载0。实际按键用户操作待确认，不能称所有实体按键已验收。后续仍需文件菜单、OSD、五项扩展、应急与非易失启动。

板载按键实测更新：用户确认“切图、暂停和恢复均正常”；docs/keys_physical_observation.json捕获物理KEY0产生N、KEY2产生H/A（亦观察到P命令），各暂停段内played_pairs保持、恢复后继续，结束auto=true、paused=false、未静音，错误/欠载0。仅KEY0/KEY2为本轮用户明确确认的实体操作，其余键不冒称已实测。证据docs/keys_validation_summary.json，回退归档releases/keys_20261028，后续优先文件菜单和OSD；无需重复刚通过的播放测试。

## 音量观察与约束（2026-10-28用户指示）
用户说明：当前可听音量上限受扩展屏自身声音设置限制，先不更改，仅记录。保留现有FPGA音量0～8档与音频增益，不因此修改PCM缩放、提高增益或更改扩展屏设置。此为用户现场观察，不将其表述为已测定的声压/硬件功率上限；后续未经用户新指示不主动调整。

当前OSD版已保存到releases/osd_20261028（位流、源码、manifest、时序、验证摘要和仿真预览）。当前用户视觉/实体菜单确认仍pending，菜单保留打开且有声；以docs/osd_menu_validation.json为准。若用户反馈异常，先对照具体文字/按键定位，不把仿真预览当作实拍。

## OSD与实体文件菜单验收确认（2026-10-28）
用户确认：“文字和文件名正常，选择图片成功，音频连续”。状态OSD、TF文件名显示、KEY15浏览/KEY12确认选图的实体操作已通过，不再是pending。已恢复有声自动轮播；最终状态记录docs/osd_final_status.json，音画欠载/SD/WAV错误仍0。真实多音轨切换仍未实测（当前卡1个WAV），双音轨仿真通过。后续从运行时间/滚动字幕、亮度/对比度继续，不重复本轮已确认功能。当前验证摘要及归档已更新。
`n最新开发阶段：运行时间/滚动字幕/亮度对比度实现见docs/DISPLAY_EFFECTS_STATUS.md。菜单关闭时KEY15/14调亮度、KEY13对比度循环、KEY12恢复默认；菜单打开时保留文件操作。音量不变。display_control用base_pixel_reset，R重扫保留运行时间；参数仅消隐应用。当前验证状态以docs/display_validation.json为准。

运行时间/字幕/参数版已通过最终构建并SRAM下载。setup +0.964ns、hold +0.014ns，14045 LUT、7156寄存器、32 BRAM9K、12 DSP、1 PLL。像素算术收紧至12位后20736组合重新通过，并消除前次局部布线冲突；未放宽时序。docs/display_initial_status.json确认4图+WAV正常、欠载/错误0；O/V/E在关闭菜单时映射亮度加、对比度循环、恢复默认，已实板回报；参数最终4/4。视觉/实体调节确认pending，见docs/display_validation.json。当前位流是display版，归档releases/display_20261028，不再是上个OSD-only版。下一阶段为转场/缩放，保持音量范围和增益不变。

2026-10-28实物验收完成：用户确认“计时、字幕、调节和数值均正常，音频连续”。本轮运行计时、平滑滚动字幕、板载亮度/对比度及OSD参数显示均已确认；docs/display_validation.json已更新passed=true。当前保持有声轮播，不改音量/增益。下一步优先图片转场与自适应缩放，无需重测本轮已通过功能。
