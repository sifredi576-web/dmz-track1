> 已撤回上板使用：2026-11-01 实板发现 TD 生成块作用域导致配置计数未连接，课件页数为 0。本目录保留作为缺陷定位归档，等待修正版替代。原时序通过不代表课件有效。

# 配置交互平台 v2 软件验收归档

2026-11-01，DMZ_EG4S20 / EG4S20BG256。未下载、未固化，不能视为硬件验收通过。

- dmz_track1.bit：当前统一生产位流，FULL_TELEMETRY=0，T1ST v5 32字节状态。
- setup +1.512ns、hold +0.030ns，路由报告含 SDRAM；14905 LUT、8723寄存器、61 BRAM9K、20 DSP。
- validation.json / manifest.json：检查结果及源码、位流哈希。
- source.zip：RTL、构建/测试脚本、约束、测试和配置；不重复收录全部原始素材/BMP/WAV。

配套 TF 资源在主工程 assets/platform/tf_course_v2（声音课件）或 tf_notice_v2（另一套配置）。原始素材在上级“素材”目录。源码可构建；媒体相关仿真和重新打包须带上配套素材。

复制所选包的 SCENE.BIN、BMP、WAV 到 FAT16/FAT32 TF 根目录。运行后使用新平台键位；完整说明见主工程 docs/PLATFORM_RUNTIME.md。后续连接硬件进行新课件和音画验收，再完成 Flash 写入及断电启动。
