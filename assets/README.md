# 课件素材源

- `course.json`：唯一配置，19 页、47 控件、55 资源，与 main 最终配置保持相同记录顺序和板端内容。
- `media/`：19 张 BMP、7 个 WAV。新增 WIDE01 为 1280×720、TALL01 为 360×640、SMALL01 为 320×240，保留原始尺寸交给 FPGA 缩放。
- `ui/`：29 张按用途命名的 PNG；UI 像素只嵌入 SCENE.BIN，不另交付 Uxxx.BIN。
- `osd_text_lines.json`、`status_panel_font.json`、`top_ticker_font.json`：OSD、中文状态栏、顶部滚动字幕的文字/字模源。字模随 RTL 内嵌，不需要 TF 文件或本机字体参与运行。

字库统一入口为 `scripts/assets/generate_osd_text_rom.py --target all`，也可单独选择 osd、status、ticker。现有课件 UI 为从已发布像素无损提取的量化 PNG，不能称为已恢复原始美术设计稿。

```powershell
python scripts/assets/pack_platform.py assets/course.json --materials assets --output release/current/tf
python scripts/assets/preview_platform.py release/current/tf --output build/preview
```

生成目录已有不同版本时，打包器会拒绝覆盖；确认更新后清空生成的 tf 目录再打包。本轮已更新为最终版本。27 个实际运行文件（19 BMP、7 WAV、SCENE.BIN）与 main 最终包逐字节一致，PACKAGE.json 是电脑端清单，无需复制到卡中。

BMP 支持 24/32 位未压缩，尺寸上限 1920×1080；WAV 为 PCM 48kHz、16 位、双声道。软件预览用于核对素材和排版，不是 FPGA 截图。
