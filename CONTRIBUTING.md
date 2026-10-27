# 团队协作指南

## 获取工程

克隆仓库时包含第三方子模块：`git clone --recurse-submodules <仓库地址>`。已有副本可运行 `git submodule update --init --recursive`。第三方来源和修改见 [docs/THIRD_PARTY.md](docs/THIRD_PARTY.md)。

## 日常协作

1. 开始工作前同步主分支，为任务创建独立分支。
2. 提交源码、约束、脚本及必要的验证记录；不要提交密钥或本机生成的构建缓存。
3. 发起 Pull Request，说明改动、测试结果和未解决问题，由另一位成员检查后合并。
4. 通过 Issues 记录任务、缺陷及负责人；涉及硬件测试时记录板卡版本、连接、工具版本和结果。

## 构建与验证

需要安路 TD 工具及目标开发板。构建脚本默认 TD 位于 `D:\ANLU`，其他位置可通过脚本的 `-TdRoot` 参数指定。构建入口和当前验证状态见 [README.md](README.md)、[P1 状态](docs/P1_status.md) 和 [P2 状态](docs/P2_status.md)。`build`、`build_p1`、`build_p2` 中的 TD 工程与输出由脚本生成，不随仓库分发。首次克隆后运行对应构建脚本生成工程，再用 TD 打开生成的 `.al` 文件。更换工具版本或环境后请重新验证。

大文件、安装程序和外部资料不在仓库内；请通过团队约定的共享位置提供，并记录版本和获取方式。
