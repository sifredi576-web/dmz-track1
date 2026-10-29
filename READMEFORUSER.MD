你说的是**安路 Tang Dynasty（简称 TD）**。本机已安装 TD 6.2，当前项目也已配置好，直接打开即可，不需要新建工程或重新分配引脚。

### 1. 打开软件和工程

启动：

```text
D:\ANLU\bin\td.exe
```

在软件中选择 **File → Open Project（打开工程）**，打开：

```text
D:\QQdownload\HX4S20_Contest_202606.zip\HX4S20_Contest_202606\dmz_track1\build_system\dmz_track1.al
```

打开后检查：

| 项目 | 正确内容 |
|---|---|
| 器件系列 | EG4 |
| 器件型号 | EG4S20BG256 |
| 顶层模块 | dmz_track1_top |

**使用这个现有工程，不要重新创建工程。**

### 2. 查看和修改代码

在工程文件列表中，双击文件即可查看或编辑。

主要关注：

| 文件 | 内容 |
|---|---|
| `dmz_track1_top.sv` | 整机连接和各模块入口 |
| `dmz_osd.sv` | 屏幕文字、字幕、菜单绘制 |
| `dmz_media_control.sv` | 播放、静音和音量控制 |
| `dmz_bmp_decoder.sv` | 图片解析与缩放 |
| `dmz_wav_player.sv` | WAV播放 |
| `dmz_scene_control.sv` | 应急模式和可视化控制 |
| `dmz_p3.adc` | 板卡引脚约束 |
| `dmz_p3.sdc` | 时钟与时序约束 |

文件名中的 `p3` 是历史命名，仍然是当前主工程使用的约束。现有引脚和时钟已经验证，日常修改显示内容时无需调整。

### 3. 修改后编译

TD 的处理流程是：

```text
保存代码 → 综合 → 布局布线 → 生成位流 → 下载板卡
```

在软件的流程窗口中依次运行对应步骤，通常显示为 **Synthesis、Place & Route、Generate Bitstream**；具体名称以当前界面为准。

完成后关注：

- 是否有错误或关键警告。
- 时序检查是否通过。
- 是否生成新的 `dmz_track1.bit`。

**仅出现“位流生成成功”还不够，需要同时确认时序通过。**

当前项目已经提供自动构建脚本，会执行编译及必要检查。在项目根目录打开 PowerShell，运行：

```powershell
.\scripts\project.ps1 -Action Build
```

这是目前更稳妥的构建入口，也可以和 TD 图形界面配合使用：**在 TD 中看代码、改代码，通过脚本统一构建。**

### 4. 下载到开发板

保持板卡供电，将电脑连接板卡右上方的 **JTAG USB**。UART2USB 用于诊断，不是配置下载接口。

当前已验证的下载方式是在项目根目录运行：

```powershell
.\scripts\project.ps1 -Action Download
```

如果希望从 **TD 的 Tcl 控制台**直接下载，可使用：

```tcl
download -bit {D:/QQdownload/HX4S20_Contest_202606.zip/HX4S20_Contest_202606/dmz_track1/build_system/dmz_track1_Runs/phy_1/dmz_track1.bit} -mode jtag -spd 7 -cable 0
```

该命令与现有下载脚本使用的方式一致，下载到 **SRAM**。

### 5. 下载后使用

准备好 TF 卡和 HDMI 显示屏，拨码设置：

- **A9 向板内**：正常运行。
- **A11 向板边缘**：正常播放。
- **A12 向板边缘**：显示音频波形和电平。

随后通过板载按键选择文件、切图、暂停、静音及打开菜单。运行时无需 TD 持续参与。

**只是再次演示现有功能时，直接下载即可；修改代码后才需要重新编译。断电后 SRAM 配置丢失，下次上电重新下载。**