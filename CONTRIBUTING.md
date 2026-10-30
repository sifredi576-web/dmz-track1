# 工程维护

源码、约束、手写测试和唯一TD工程提交Git；build及TD *_Runs缓存不提交。第三方子模块需完整初始化，许可证保留。不要用目录扫描隐式加入正式编译文件，修改project/td/sources.f后运行scripts/build/prepare.ps1同步工程。

按目录迁移、删除、逻辑修改分别审查。使用zyr整理，不自动提交或合并。当前范围和操作以README及USER_GUIDE为准。原始发布材料/验证记录不可冒充新构建验证结果。

测试用例和依赖维护在sim/tests.json，不再为每组复制运行脚本。结构核查使用scripts/test/check_structure.py。默认只讨论，修改先获用户授权；禁止读屏及模拟鼠标键盘，不自动备份或操作板卡。
