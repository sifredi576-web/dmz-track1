# 2026-11-02 SRAM课件实板修正版

本版位流SHA256：e4492ed921a4ee4184a8c7af3906159ee5e6f6f51439f3c71f961f5df2e63190。

TD 6.2.168116，EG4S20BG256。最终路由setup +0.723ns、hold +0.095ns，布线合法。SRAM已下载，16页课件自动流程通过，最终成绩2/3；中文显示、实际声音和实体按键仍待用户确认。未写Flash。

旧platform_runtime_v2_20261101位流存在配置计数作用域问题，不能用于课件验收。本目录为其修正版，不修改旧归档。

source.zip包含RTL、约束、构建/测试脚本、仿真夹具、配置及主要说明。BMP/WAV素材请使用工作区assets/platform/tf_course_v2，根目录复制SCENE.BIN及全部BMP/WAV。媒体文件不在源码压缩包内。重建使用scripts/build_system.ps1，主工程唯一，布局拥塞参数和seed=3已写入构建脚本。

实物反馈更新：用户报告红色ALERT页面方框及三角旁波纹花屏，音源与部分按键待确认。本位流并未通过完整实物验收；后续修正见工作区PLATFORM_BOARD_FIX_NOTES.md。
