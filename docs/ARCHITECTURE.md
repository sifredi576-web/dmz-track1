# 工程架构

唯一顶层rtl/top/dmz_track1_top.sv负责时钟、板级连接、音视频输出组合和状态打包。目录按职责划分：

| 目录 | 内容 |
|---|---|
| rtl/platform | 安路时钟资源dmz_clocking |
| rtl/storage | SD/SPI、FAT、SDRAM、自检与配置传输 |
| rtl/control | 课程运行时、UI、按键、菜单及媒体调度 |
| rtl/video | BMP缩放、帧缓存/擦除、画面参数、控件合成、OSD |
| rtl/audio | WAV、提示音、实际播放完成及PCM波形 |
| rtl/common、rtl/hdmi | FIFO/跨时钟/UART和HDMI协议 |
| assets | 一份课件配置与实际源素材 |
| project/td、constraints | 唯一TD工程、明确输入及当前板卡约束 |
| scripts | 构建、素材、最少测试和板端工具 |
| release/current | 当前可交付位流、最终报告；生成的TF包 |

图片链路：TF→BMP解析/等比缩放→SDRAM双帧→擦除转场→亮度/对比度→OSD/UI→HDMI。音频链路：TF→WAV→异步FIFO→暂停/音量/静音→HDMI，同时送PCM波形。

像素25MHz、串行125MHz、内存50MHz。两帧字节基址为0和0x100000，配置区为0x200000～0x2FFFFF。运行时解析、计分、合成及控制均在FPGA内，无额外处理器。

保持原始顶层连接，额外四层封装已撤回。FIFO地址重编码、跨时钟握手及共享BRAM属于实际实现，不作为历史兼容层删除。保留当前底层图库回退及可选完整诊断RTL；正式交付和电脑诊断使用默认v5模式。

只保留三个不转换生产源码的原生ModelSim测试：UI计分/控制、音频消费完成、FIFO地址重编码一致性。它们不是完整媒体链路或实板证明。所有编译工作库均为可删除生成物。
