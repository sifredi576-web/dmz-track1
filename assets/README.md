# 课件素材源

- course.json：唯一声音课程配置，当前16页、41控件、49资源。
- media/：课程实际使用的16张BMP和7个WAV，按板端8.3名称保存。
- ui/：按用途命名的按钮底图和标签PNG，不再使用P6阶段目录或独立Uxxx.BIN副本。
- osd_text_lines.json：现有OSD文字源。
- status_panel_font.json：main迁入的中文状态面板字库源；字模已内嵌在rtl/video/dmz_status_panel.sv，不增加TF卡文件。

统一字库工具为scripts/assets/generate_osd_text_rom.py：默认生成OSD文字表，`--target status`生成中文状态栏字库，`--target all`生成两者。本轮只适配工具入口，没有执行字库重生成或打包。

UI图片从已验证SCENE.BIN的A1R5G5B5像素无损提取到量化PNG；不是缺失的原始PNG/SVG设计稿。重新打包应产生相同SCENE.BIN。取得原始设计稿后可按用途替换，须重新验收。

```powershell
python scripts/assets/pack_platform.py assets/course.json --materials assets --output release/current/tf
python scripts/assets/preview_platform.py release/current/tf --output build/preview
```

打包直接读取源素材，UI只嵌入SCENE.BIN，TF包仅包含BMP、WAV、SCENE.BIN和电脑端PACKAGE.json。预览从SCENE.BIN读取UI，不依赖隐藏测试目录，不作为硬件截图。

输出目录已有不同内容时，打包器会拒绝覆盖；确认要更新后清空生成的tf目录再打包。BMP采用24/32位未压缩格式，最大1920×1080；音频为48kHz/16位/双声道PCM。素材修改必须同步更新配置并重新打包，不能直接替换已发布卡内文件。
