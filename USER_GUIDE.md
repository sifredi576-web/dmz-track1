# 使用说明

## 1. 构建、打包与下载

TD打开project/td/dmz_track1.al，顶层为dmz_track1_top。修改sources.f后执行scripts/build/prepare.ps1同步工程；普通源码编辑无需新增工程。

1. 执行Package生成release/current/tf，将其中SCENE.BIN、BMP和WAV放入FAT16/32卡根目录；同卡只使用这一份配置。PACKAGE.json无需复制。
2. 执行Build，检查生成当前位流、正的setup/hold余量及100%时序覆盖。
3. 连接板卡且准备好下载时，显式执行Download。脚本会检查源码、工程、流程与位流哈希；只配置SRAM，掉电需要重新下载。

```powershell
./scripts/project.ps1 -Action Package
./scripts/project.ps1 -Action Build -TdRoot <TD安装目录>
./scripts/project.ps1 -Action Download -TdRoot <TD安装目录>
```

## 2. 板载操作

板正面USB在右侧时，4×4键盘上排从左至右为KEY15、14、13、12，下排依次为KEY3、2、1、0。

| 按键 | 功能 |
|---|---|
| KEY15 / KEY8 | 主页 / 返回 |
| KEY14、6、11、9 | 上、下、左、右移动焦点 |
| KEY10 / KEY13 | 确认 / 重播 |
| KEY12 | 打开设置；设置内再次按下切换页签 |
| KEY7、5、4 | 普通通知、优先通知、结束插播 |
| KEY3 / KEY2 | 静音切换 / 暂停继续 |
| KEY1 / KEY0 | 音量减 / 加 |

A9高运行、低复位；A11高为物理优先通知，需释放开关才能解除；A12向板边缘时显示可视化。不要将Config按钮当成普通按键。

课件中先选答案，再移动至提交确认；首次提交计分，重复提交不重复加分。观察页选择纯音、钢琴或人声，当前每段约4秒，结束后可重新确认播放。重播保留静音/暂停状态；无声时先检查两项及显示设备音量。

设置菜单用上下选择、左右调整亮度/对比度，KEY10执行，KEY8关闭；默认亮度/对比度为4/4。重扫TF会重置课程，不是暂停。通知退出恢复课程上下文。

当前待机页尚未配置自动轮播，横竖图和课件底栏也尚待补齐，详见docs/demo_plan.md。缺少SCENE.BIN时保留底层图库回退，但它不是当前课件演示入口。

## 3. 电脑诊断

诊断工具仅支持当前默认v5帧，不再支持旧阶段协议。程序不参与FPGA运行逻辑，板卡可独立演示。

```powershell
./scripts/board/platform_console.ps1 -Port COM9 -Action Status
./scripts/board/platform_console.ps1 -Port COM9 -Action Confirm
```

COM9只是示例，按实际设备端口填写。可用动作见脚本参数；脚本只有显式运行时才会打开串口或发送命令。
