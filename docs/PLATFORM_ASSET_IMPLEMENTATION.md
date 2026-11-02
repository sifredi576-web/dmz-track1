> 历史阶段记录：本页描述第一批 v1 协议，不代表当前实现。当前 v2、使用方法及验证见 [PLATFORM_RUNTIME.md](PLATFORM_RUNTIME.md)。

# 素材驱动的平台改造：第一批

日期：2026-11-01。最高目标见PROJECT_GOALS_LOCKED.md。素材原稿在工作区根目录“素材/”，本次不修改原稿、不写TF卡、不下载或固化板卡。

## 素材核对与配置

16张背景均为640×480、24位BI_RGB；7段WAV均为PCM48kHz/16位/双声道。26张UI透明PNG包括两个底图、12个通用标签及12个答题选项；按钮160×48，选项272×44。完整清单见materials/inventory.json。

课件由16页、41个控件、49个资源组成；场景配置3424字节。LECT01～03绑定LESSON01～03，TONE01/PIANO01/VOICE01为观察页的独立音频动作，不再要求背景与WAV同名。题目正确选项依据现有解析页分别为A、B、C，不以文件复制顺序确定。

这只是配置描述，页面动作执行、首次答题计分、分数绘制和通知上下文恢复尚未接入整机，不能当作已实现课程闭环。

## 已实现的内容

1. scripts/pack_platform.py：离线检查媒体、短文件名、唯一资源ID、资源类型、跳转、屏幕边界、贴图尺寸、题目参数和容量；先全部验证再写出。
2. assets/platform/sound_course.json：首套声音课件配置。assets/platform/exhibit_demo.json：另一份两页普通/优先通知浏览配置，用于同协议的泛化验证；不是已经在硬件上证明泛化。
3. PNG转换为DZUI二进制贴图，保留位置尺寸，以A1R5G5B5存储颜色和二值透明度。没有让FPGA解析PNG，也未把中文标签烘焙到背景。SVG/PNG原稿保留。二值alpha不等同于半透明混合；透明边缘可能较原PNG更硬。
4. rtl/platform/dmz_scene_loader.sv：流式检查魔数、版本、容量、长度、保留位和CRC32；失败不发commit。接受下游反压；输出针对暂存区，只有commit后才可激活。
5. rtl/platform/dmz_platform_boot.sv及现有存储模块：根目录发现SCENE.BIN后先用FPGA FAT流读取并校验，再启动既有媒体链路；没有配置时维持旧版路径。坏配置报告错误并回退原媒体功能，不改变图片/WAV内容。
6. 字节流缓存改为同步BRAM读及握手预取，减少异步缓存的LUT开销；正确性由BMP逐像素、WAV逐采样、反压、取消与循环测试验证。

**本批尚未存储/激活完整配置表、加载UI到SDRAM或运行按钮引擎。SCENE.BIN校验通过只表示传输结构与校验通过，不是页面语义和完整交互已通过。当前不能将课件包直接当作可交互成品演示。**

## 文件格式v1

全部整数小端；所有记录32字节。SCENE.BIN为32字节头、资源记录、页面记录、控件记录。

| 头偏移 | 内容 |
|---|---|
| 0～3 | ASCII DMZP |
| 4～5 / 6～7 | 版本1 / 头长32 |
| 8～11 / 12～15 | 后续负载长度 / 标准CRC32（初值FFFFFFFF、多项式EDB88320、最终异或FFFFFFFF） |
| 16～19 | 资源数、页面数、控件数、入口页索引 |
| 20～31 | 必须为0 |

容量：64资源、32页、128控件；每页最多8控件，层号0～3，坐标在640×480内。索引由显式ID编译而来，运行加载时必须按11字节FAT短名查找资源，不能把资源ID直接当目录索引。

- 资源记录：0～10为8+3短名；11类型（1 BMP、2 WAV、3 DZUI）；12～13宽、14～15高、16～17保留；18～21文件长、22～25文件CRC、26～29音频样本对数。
- 页面记录：0页索引，1背景资源，2音频资源（FF无），3标志（bit0循环、bit1可视化），4自动目标（FF无），6～7驻留毫秒，8控件起点，9控件数，10返回页（FF无），11题号、12正确选项（FF无），13优先级0～2。
- 控件记录：0页面、1层、2标签、3底图；4～11为x/y/w/h四个16位值；12动作、13目标、14参数、15标志（bit0可用、bit1可见），16～19为左/右/上/下焦点的页内控件索引（FF无）。默认线性循环，配置可指定网格邻居。
- 动作：1跳页、2选音频、3暂选答案、4返回、5重学、6暂停、7静音、8音量、9提交答案。动作执行器仍待实现；不能通过直接跳到解析页绕过后续作答规则。
- DZUI：16字节头（DZUI、16位宽/高、32位像素字节数及像素CRC），后接逐行16位A1R5G5B5像素。转换阈值alpha≥128为可见。

## 生成与预览

在dmz_track1根目录运行（python需Pillow）：

```powershell
python scripts/pack_platform.py assets/platform/sound_course.json --materials ../素材 --output assets/platform/tf_course
python scripts/pack_platform.py assets/platform/exhibit_demo.json --materials ../素材 --output assets/platform/tf_notice
python scripts/preview_platform.py assets/platform/tf_course --output docs/materials/course_reference
```

已有输出如与新内容不同，脚本会拒绝覆盖；修改配置后使用新的输出目录。生成的PACKAGE.json是电脑端索引，不是FPGA运行时解析对象。

预览图materials/course_reference/CONTACT.png由生成后的二进制配置和DZUI解码得到，用来核对独立按钮位置及中文标签；它是软件参考渲染，不是HDMI截图。另有notice_reference两页预览。

## 诊断与验证

T1ST v4原保留位：word22 bit25配置文件存在，bit24传输校验通过，bit10～8错误0～7。scripts/system_console.ps1增加platform_config_found/valid/error。它们不代表按钮引擎启用。

配置错误码：1文件流错误、2截断、3魔数/版本、4容量或长度、5保留位、6多余字节、7CRC。pack脚本检查静态页面语义；FPGA后续页面激活前仍必须验证引用/坐标/动作等，不可只信任CRC。

测试入口：tests/test_platform_pack.py（12项），scripts/test_platform.ps1（真实两配置、反压、截断、CRC、版本、边界及I/O错误），scripts/test_media.ps1（原媒体回归及配置启动/损坏回退）。最终构建时序与状态见platform_asset_validation.json。

## 后续实施顺序与预算

1. 暂存/活动配置表与按短名解析资源，完整运行时语义检查。
2. UI贴图加载到SDRAM，逐行缓存叠加；不能将全部PNG像素塞入LUT/BRAM。SDRAM字节0、0x100000两帧区域保持，新增区域先统一划分再接入仲裁。
3. 焦点、确认、返回及互斥按键路由；现有菜单/图像调节不能同时响应同一按键。
4. 以实际FIFO消费完成产生单次音频结束事件，接入页切换、答题首次计分和结果动态OSD。不能把解码完成当作扬声器播放完毕。
5. 通知优先级、过期取消和返回上下文；普通返回与优先插播退出规则分离。
6. 场景在同一位流中实际切换，必要实板验收后再录三分钟视频；Flash仍等待硬件连接。

当前配置中VIS标志仅提出观察页显示需求；现有波形固定位置与按钮/OSD布局仍需统一坐标规划。软件包准备完成不等于上述功能完成。

按键后续进展：通用焦点/暂选/提交/首次计分控制器已仿真，但未与活动配置表和图层连接。见PLATFORM_KEYS.md。文件名索引已另改同步BRAM读，当前资源与时序以ui_keys_validation.json为准。
