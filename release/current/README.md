# 当前交付

- dmz_track1.bit：最近一次通过构建的SRAM位流。
- build_manifest.json：源码、配置及位流SHA256。
- timing.txt：对应的最终布线时序报告，成功构建后生成。
- verification.json：当前验证结论及未完成项。
- tf/：Package从assets生成的唯一TF交付包，生成目录不提交Git。

构建尚未通过时，不以旧bit代替新版本。正式下载入口会核对源文件和位流是否属于同一构建。历史P7源码包、位流和多轮试验记录不再随当前项目交付。
