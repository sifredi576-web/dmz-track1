# 工程架构

唯一顶层rtl/top/dmz_track1_top.sv负责时钟、板级连接、音视频输出组合和状态打包。目录按职责划分：

| 目录 | 内容 |
|---|---|
| rtl/platform | 存储时钟dmz_clocking及视频时钟dmz_wide_pll |
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

当前移植目标为视频像素75MHz、串行375MHz、内存50MHz，双PLL。输出1280×720、约60.606Hz，非精确标准74.25MHz/60Hz。原640×480内部课件经dmz_wide_mapper映射到中央960×720；dmz_image_framebuffer的逐行重复/预取配合供数，不扩展成1280×720存储帧。两帧字节基址为0和0x100000，配置区为0x200000～0x2FFFFF。运行时解析、计分、合成及控制均在FPGA内，无额外处理器。

保持原始顶层连接，额外四层封装已撤回。FIFO地址重编码、跨时钟握手及共享BRAM属于实际实现，不作为历史兼容层删除。保留当前底层图库回退及可选完整诊断RTL；正式交付和电脑诊断使用默认v5模式。

只保留三个不转换生产源码的原生ModelSim测试：UI计分/控制、音频消费完成、FIFO地址重编码一致性。它们不是完整媒体链路或实板证明。所有编译工作库均为可删除生成物。

## main功能迁入（未构建/验证）

来源main 11ead39。新增dmz_wide_pll、dmz_wide_mapper、dmz_picture_pipe、dmz_status_panel；原模块更新颜色三拍流水、图层与HDMI协议延迟对齐、串行复位、目录/索引及音频FIFO数据编码、控件描述符寄存和10步擦除。新模块归入现有platform/video目录，不恢复旧阶段工程。

触发采集逻辑仍位于dmz_audio_visual，trigger_enabled与KEY4/UART切换仍位于顶层。只移除了缺失dmz_trigger_button的实例、像素连线和对应叠加分支；不增加替代空模块、不删除触发算法。

工程及脚本统一采用seed14、物理单线程、布局/布线高努力、place保持修复与禁用自动引脚交换；保留高时序/布局后优化。源清单为57项。没有执行prepare、构建、字库生成、测试或下载。
