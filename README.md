# DMZ 赛道一工程基线

日期：2026-10-25。目标硬件：DMZ_EG4S20 / EG4S20BG256。按用户要求只处理技术实现。

## 当前 P1 状态
P1 已完成构建、仿真、SRAM 下载和串口检查。用户此前反馈有画面但无声音；2026-10-26 补充显示设备为爱国者 M156-D057，当前未连接。音频实机及连续测试尚未通过验收。
入口：`build_p1/dmz_p1.al`；使用与证据见 [P1 状态](docs/P1_status.md)。

以下为保留的 P0 记录。

## 使用入口
- TD 工程：`build/dmz_p0.al`
- 位流：`build/dmz_p0_Runs/phy_1/dmz_p0.bit`
- 源码：`rtl/dmz_p0_top.v`
- 约束：`constraints/dmz_p0.adc` 和 `dmz_p0.sdc`
- 构建：在工程根目录运行 `powershell -File scripts/build.ps1`。
- 串口验证：SRAM 下载后 SW0 拨上，运行 `powershell -File scripts/test_uart.ps1 -Port COM3`。

## 基线行为
SW0（A9）低电平复位，高电平运行；复位释放经过两级同步。
LED0 每 0.5 秒翻转一次，完整周期 1 秒。LED1～7 显示 SW1～7 的同步输入。
F12 输入经过两级同步后从 D12 回送，作为串口物理链路诊断；这不是 UART 协议解析器。
P0 不驱动 HDMI、SD 卡、矩阵键盘或音频外围，避免未确认扩展连接就输出信号。
LED 引脚与 R-2R DAC 复用，基线运行时 DAC 会有对应电压变化。

## 已核对的主板引脚
依据工作区《大拇指安路EG4S20 - 板卡和开发工具入门.pdf》PDF 第 8、9、13、15、16、24 页。
| 功能 | 引脚 |
|---|---|
| 50MHz 时钟 | R7 |
| SW0 / 本工程 run_n | A9 |
| SW1～7 | A10 B10 A11 A12 B12 A13 A14 |
| LED0～7，高亮 | B14 B15 B16 C15 C16 E13 E16 F16 |
| FPGA UART RX / TX | F12 / D12 |

注意：本工程明确使用 SW0 作为复位输入，不使用 E3 复位键。二者不得混淆。

## 扩展接口核对边界
综合底板说明列出 HDMI 正端：CLK=P1，D0=N1，D1=P4，D2=J3。
这只是资料候选映射，并未加入 P0 约束。进入 P1 前还须确认实际底板版本、负端差分对、IO 电气标准、HPD/DDC 连接和显示设备。
SD 卡需确认实际插槽/模块及 SPI 引脚，不能从 USB 识别结果推断已经连接。
SDRAM 使用芯片封装内 2M×32bit（8 MiB）存储，P2 执行存储测试。

## 已验证结果
- Windows 当前设备：Anlogic AL-Link Mini，状态 OK；CH340 COM3，状态 OK。
- AL-Link 驱动：Anlogic 1.2.3.20，oem285.inf，已签名。
- CH340 驱动：wch.cn 3.9.2024.9，oem215.inf，已签名。
- 工具：D:/ANLU/bin/td_commands_prompt.exe；运行版本 V6.2.168116，与随包 TD 6.2.1 Engineer 168116 对应。
- 综合、布局布线、位流生成成功。
- 50MHz 布线后报告：建立裕量 15.022ns，保持裕量 0.038ns，无违例。
- 逻辑资源：36 LUT，28 普通寄存器；另有 IO 打包寄存器；无 BRAM/DSP/PLL 占用。
- 外部异步输入到第一同步级、异步输出设置时序例外；100% STA coverage 不代表这些外部接口已通过电气验证。
- ChipLinker 检测到 Anlogic USB Cable #0 和 EG4S20BG256。

实物 LED、拨码和扩展接口仍需观察验证；软件构建成功不等同于全部上板验收。

## 上板验证补充
2026-10-25：BitWriter 使用 PROGRAM_SRAM / 5MHz，识别 EG4S20BG256，显示 Downloading succeeded。
未编程 Flash；掉电后 P0 临时配置不会保留。
COM3 / 115200 / 8N1，发送 0x00～0xFF 共256字节，全部原样回传。
证据：docs/download_log.txt 与 docs/uart_test.txt。
剩余人工观察：LED0 每秒完整闪烁一次；SW1～7 对应 LED1～7；SW0 向下复位/向上恢复。
