# 第三方来源与修改

## hdl-util/hdmi
来源：https://github.com/hdl-util/hdmi
固定提交：83b1c9543a91b776671a44e68e130f81cae437b7。
上游源码：`vendor/hdl-util-hdmi`。使用 MIT 许可，完整文本保留于 `vendor/hdl-util-hdmi/LICENSE-MIT`；上游另提供 Apache-2.0 选项。
作者：Sameer Puri 及上游贡献者。协议模块不是本工程原创。

适配副本位于 `rtl/p1/hdmi_core`：
- 音频输入从单独时钟改为像素域 sample enable，保留采样流水。
- ACR 改为带复位的像素域计数器，使用完整 20 位 CTS，避免工具实数常量转换差异。
- 增加采样缓冲/控制复位，修正时序块中的混合阻塞/非阻塞赋值。
- 设置合理默认参数，避免 TD 零位宽解析错误；定义未使用包槽的零值。
- 使用自编 EG4 ODDR 串行器替代上游 serializer。

## 安路 PLL
`rtl/p1/dmz_video_pll.v` 基于随包 lab_ex5_i2s 的安路工具生成 video_pll.v，保留原文件版权头。
适配模块名及锁定状态输出；50 MHz → 25/125 MHz 配置来自配套参考设计。

## 本工程新增
DMZ 引脚/时钟适配、测试图、分数使能正弦源、复位与开关同步、EG4 串行发送适配、构建/下载/验证脚本以及测试平台。

## P2/P3 新增 RTL（2026-10-27）
SDRAM 控制/自检、异步像素FIFO、双缓冲调度、状态串口、SD SPI 初始化/只读扇区、FAT/BMP解析均为本工程新增。SDRAM硬宏/PLL使用安路器件资源与生成模板；HDMI协议核复用范围不变。Etron数据手册仅作为协议时序参考，不是本工程原创资料。
