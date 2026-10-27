# 图片切换与自动轮播

2026-10-27，当前统一工程 `build_system/dmz_track1.al`，顶层 `dmz_track1_top`，T1ST诊断版本3。

## 已实现

- FPGA扫描FAT16/FAT32根目录，按目录项顺序建立最多32张BMP的簇、长度和短文件名索引；不要求电脑参与扫描。
- 上一张、下一张、首尾循环、自动轮播及暂停。默认自动，只有一张图时不反复自动读取。
- 每张图提交后计时5秒，再开始加载下一张。旧图在读卡和后台写入期间继续显示；新图完整写完才在垂直消隐提交。
- 手动选图会暂停自动；加载期间至多保留最新方向请求。暂停不取消已经开始的加载。
- 不支持的图片不提交半帧，保留有效前台；自动模式稍后尝试下一项。SD通信故障仍需Reload恢复，不把失败扇区当成功。
- 默认静音，图片操作不改变音频模式。当前仍是测试音源，WAV未接入。

```powershell
./scripts/project.ps1 -Action Next
./scripts/project.ps1 -Action Previous
./scripts/project.ps1 -Action Pause
./scripts/project.ps1 -Action Auto
./scripts/project.ps1 -Action Status
```

直接串口字节分别为N/P/H/A。M静音、U测试音、R全媒体重载继续保留。串口自动识别CH340，必要时加 `-Port COM3`。

## 验证结果

- `scripts/test_gallery.ps1`：索引3项（2张不同内容的正常图+1张压缩坏图）；逐像素比较、拒绝坏图且零帧写入、重新选择首图通过。
- 新位流综合/布线通过：建立+0.988ns，保持+0.032ns；7575LUT、4556寄存器、13BRAM9K、6DSP、1PLL。
- 已SRAM下载到DMZ；实卡识别4张BMP，暂停/下一张/上一张/恢复自动命令获执行回报。
- 28秒针对性自动记录遍历0/1/2/3全部索引并检查顺序，提交计数14→19，SDRAM/SD/BMP错误和显示欠载均0；保持静音。
- 用户明确反馈：**“能切换不同图片，画面正常”**。
- 证据：`gallery_validation_summary.json`、`gallery_controls_log.txt`、`gallery_after_next.json`、`gallery_after_previous.json`、`gallery_auto_cycle.json`；没有重跑一般基础长测。

## 边界与下一步

仍限制640×480、24/32位未压缩BI_RGB，支持BMP正/负高度；目录顺序不等于文件名排序。最多32项，未实现递归子目录/长文件名显示、任意尺寸缩放及转场特效，因此不把五项扩展全部计为完成。

`dmz_bmp_loader`新增GALLERY参数，默认0保留旧首图接口行为；统一顶层显式设为1。索引与BMP仍在同一状态机中，下一步需拆出可供BMP/WAV共享的FAT文件服务，再加入音频FIFO和音频优先读卡仲裁。

v3仍64字节，word13改为：5:0图片数、10:6目标索引、15:11显示索引、16自动、17加载、18索引就绪、31:19提交数低13位；刷新数不再通过此字发送。不要用旧解析器把图库信息当刷新数。`system_console.ps1`同时支持v2/v3。

基线旧位流备份在 `releases/baseline_20261027`；旧30分钟报告仅属于该基线，不属于本次图库位流。最新源码/位流哈希见 `system_manifest.json`。
