# Flash固化与冷启动

2026-11-01：用户授权先固化当前程序，避免每次上电依赖电脑下载。

## 当前状态

已核对DMZ板卡入门手册的Program Flash步骤，以及TD配套SWUG110第4.3.3节；当前尚未写入Flash。电脑未检测到板卡连接，BitWriter显示No hardware，等待连接后继续。验证记录：flash_validation.json。

目标为当前已构建、时序通过并完成配对索引实板检查的媒体版本，不是尚未开发完成的配置化课件平台。位流与paired_20261031验证哈希核对一致。

## 操作与验收

1. 保持板卡供电并连接JTAG USB，TF卡、HDMI保持连接；A9向板内运行，A11向板边缘正常模式。
2. TD打开BitWriter，检测下载器，添加当前build_system/dmz_track1_Runs/phy_1/dmz_track1.bit。
3. 选择Program Flash而非Program SRAM，核对器件与界面要求的Flash参数，执行并检查完整结果。写入期间保持供电连接。
4. 成功后不再执行SRAM下载；断开全部可能供电的USB等连接，确保板卡真正断电，再恢复规定的板卡供电。
5. 确认无需TD/JTAG命令即可出现TF图片和WAV声音，按键可用。软件复位、Config重载或UART状态恢复不能代替断电重启确认。

固化后默认背景音乐模式；KEY10启用配对模式。固化不意味着把TF媒体写入Flash，TF卡仍需保留。只更换受支持的媒体无需重新编译；修改HDL功能后仍需重新构建并更新Flash。

## 恢复

保留releases/p7_20261028和releases/paired_20261031。若固化内容需更新，用已验证位流重新Program Flash；必要时先通过既有SRAM下载路径诊断。不得将未完成的写入、失败日志或待确认冷启动标记为固化验收成功。

新键位开发版（ui_keys_20261101）已通过软件检查，未上板。flash_validation.json中的原配对哈希对应冻结归档releases/paired_20261031/dmz_track1.bit，不再错误指向已变化的build_system当前位流。恢复硬件后应核对目标版本，先做必要的SRAM操作验证，再执行Flash固化及真实断电验收。
