# 第三方来源

HDMI协议模块改编自hdl-util/hdmi，作者Sameer Puri及上游贡献者，固定提交83b1c9543a91b776671a44e68e130f81cae437b7。来源：https://github.com/hdl-util/hdmi 。采用MIT许可，全文见[HDMI-MIT.txt](../licenses/HDMI-MIT.txt)。

现用适配版本位于rtl/hdmi，包含安路串行器、sample-enable音频接口、ACR计数、复位和诊断适配。未编译使用的完整上游副本和子模块入口已移除，不改变许可及署名要求。

rtl/platform/dmz_clocking.v源自安路IP生成模板，保留原始版权、原语及工具来源注释，仅统一本项目模块名。SDRAM硬宏由安路工具提供。

UI PNG由既有发布包的量化像素提取得到，不能据此宣称已恢复原始美术稿；课程素材的原创归属仍由提供者确认。本项目未将第三方协议核或厂商原语标为自主算法。
