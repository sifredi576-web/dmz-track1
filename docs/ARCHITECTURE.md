# 工程架构

唯一顶层为 `rtl/top/dmz_track1_top.sv`，唯一 TD 工程为 `project/td/dmz_track1.al`，59 项输入统一由 sources.f 维护。保持原始顶层集成方式，不增加额外系统封装或阶段工程。

| 目录 | 职责 |
|---|---|
| rtl/platform | 存储/视频 PLL |
| rtl/storage | SD/SPI、FAT、SDRAM、自检、配置加载和内存仲裁 |
| rtl/control | 场景运行时、按键、UI、菜单、媒体调度 |
| rtl/video | BMP 缩放、双帧/擦除、图层、画面参数、OSD、侧栏、触发状态和字幕 |
| rtl/audio | WAV、采样、播放完成判断、波形和电平 |
| rtl/common、rtl/hdmi | FIFO、跨时钟、UART、HDMI 协议与串行输出 |
| assets | 当前唯一配置和源素材、字库 |
| sim、scripts | 12 项直接 RTL 检查及构建/素材工具 |
| release/current | 最近正式交付和当前验证摘要；TF 包可重新生成 |

视频：TF → BMP 解析/最近邻适配 → 图层合成 → SDRAM 双帧 → 擦除切换 → 中央宽屏映射 → 亮度/对比度 → OSD/状态/字幕 → HDMI。

音频：TF → WAV → 2048 对异步 FIFO → 音量/静音/暂停 → HDMI；同一实际输出 PCM 送触发波形，消费完成后才能触发课程自动跳转。

50MHz 内存域、75MHz 像素域和375MHz串行域采用双PLL。内部课件 640×480，在 1280×720 画面中央映射到960×720，左右各160像素；状态和字幕按输出坐标叠加。帧缓存不扩展成宽屏帧，字节基址0和0x100000，配置区0x200000～0x2FFFFF。

main 最终提交 b393683 的所有已实例化模块均已迁入；仅保留现有 dmz_clocking、dmz_media_pipeline 两个整理后的模块名。新字幕和触发状态绘图模块归入 video。未使用的旧 dmz_board_commands 和 dmz_bmp_loader 不恢复；不带回构建归档、旧测试框架或上游嵌套仓库。

为直接事件仿真做了两处等价调整：配置长度对齐常量显式32位；BMP组合字段显式引用头字节，计算位宽和算法不变。详细对照、验证边界与资源结果见[技术报告](TECHNICAL_REPORT.md)。
