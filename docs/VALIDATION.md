# 验证状态

## 已有实板证据

保留P7发布包及[最终确认](verification/history/p7_validation.json)。history中的39份原始证据属于重构前版本，不能作为本轮位流的实板证明。P7包本轮未改动。

## 2026-10-30架构重构

- TD重新综合、布局布线、生成位流通过；STA覆盖100%，setup余量+1.950ns、hold余量+0.021ns，包含SDRAM硬宏路径。资源：15503 LUT、7561寄存器、37 BRAM9K、17 DSP、1 PLL。资源/时序受综合布局变化影响，不据此承诺实板性能提高。
- 新旧顶层比较通过：77861个像素周期、263665次TMDS采样；在测试激励下RGB、最终PCM、控制输出、96字节状态帧和板级输出一致。测试覆盖音量/静音、暂停/恢复、音源、菜单、显示参数、应急和重载。
- display、keys、control、scene、osd、commands、media七组基础测试重新通过。media检查三张完整图片共921600像素、碎片WAV循环、精确双声道样本及并发读卡仲裁/背压。
- 当前48项正式输入及位流哈希与新构建manifest一致；inputs.sha256.json已更新为本轮验证基准。详细摘要见[整理结果](verification/reorganization.json)，原始日志在build/reports。

比较测试用行为PLL、占位SDRAM硬宏，并注入相同像素/PCM生产数据；它验证本次拆分的连接与周期行为，不是形式等价证明，也未覆盖真实SD卡、完整SDRAM数据路径或电气信号。旧顶层由prepare_reference.ps1从Git提交8e8b4d6生成到build，不保留另一套生产代码。

编译仍有原有BMP前置声明、HDMI初始化及工具映射等warning；本轮不声称零warning。比较测试有HDMI unique-case启动警告，未出现仿真错误。

## 测试入口与未验证范围

基础矩阵：`./scripts/project.ps1 -Action Test`；完整默认变体：`./scripts/test/run.ps1 -Profile Full`。架构比较单独执行：`./scripts/test/run.ps1 -Simulator ModelSim -Tests architecture`，要求Git历史包含8e8b4d6。

前一轮目录/测试整理已运行14组基础验证及58/64个默认声明用例；剩余六个media变体与Verilator后端尚未执行。本轮没有把全部Full矩阵重新跑一遍。

ModelSim10.3c的纯函数数组读取与一处声明顺序兼容处理仅作用于build副本，正式RTL不变。尚未下载本轮位流或重新上板验收；未提交、合并main。
