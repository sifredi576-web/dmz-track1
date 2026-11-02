# 2026-11-02 颜色与实物验收版

位流SHA256：25e1fc49f83a81bdd24e7bcb0c524005cb3921b735ecee7b4adb6d472b03cba9。

本版已下载SRAM。用户确认蓝色恢复、红色警示页正常和退出恢复、讲解可重播两次、三个观察音源、实时波形、KEY8返回第三讲均正常。自动课件检查通过，最终2/3。时序setup +0.266ns、hold +0.030ns；LUT16089、REG8844、BRAM62、DSP20。未写Flash。

source.zip包含RTL、约束、脚本、仿真夹具、课件配置及证据；BMP/WAV不在源码包中，使用工作区assets/platform/tf_course_v2完整素材。routed_checkpoint.zip包含对应源的最终布线DB、主工程运行项目、位流、报告和日志；与源码包按原路径解压可恢复本次构建证据。

TD6.2此次导出DB返回USR-8003，但DB可完整导入。独立TD进程重算最终STA、bitgen成功，哈希证据见recovery_validation.json。scripts/build_system.ps1现仅对这一精确故障类别调用recover_system_bit.ps1；恢复必须通过源码时效、DB导入、时序、bitgen与全部哈希检查，其他故障和负时序仍拒绝。现有证据可用recover_system_bit.ps1 -ValidateExisting复核。未来构建仍需要查看实际结果，不能把封装脚本视为已重新跑过一次完整自动构建。

旧e449/e98c位流存在已定位的配置或颜色问题，不应用于本轮验收。下一步：可见静音/暂停/结束状态提示、第二配置实卡验证、Flash固化及断电启动、音画边界和最坏读卡延迟量测。
