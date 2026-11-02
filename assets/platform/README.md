# 平台课件资源包

sound_course.json：16页声音课件、41控件、49资源。exhibit_demo.json：两页通知浏览、2控件，验证同协议支持不同流程。

tf_course/和tf_notice/为离线生成的平铺TF候选包；PACKAGE.json为电脑端说明。原始素材未改。不要将整个UI小图转换成BMP放进旧图库。

当前FPGA只增加SCENE.BIN启动传输校验，尚未激活页面表、按钮渲染、动作及计分。复制这些包到TF不会自动获得完整交互课件。预览是软件参考效果，不是硬件截图。以docs/PLATFORM_ASSET_IMPLEMENTATION.md及platform_asset_validation.json为准。

转换命令、协议及后续步骤见项目docs/PLATFORM_ASSET_IMPLEMENTATION.md。当前主工程新位流未下载、未固化。保留已实板验证版本供回退。
