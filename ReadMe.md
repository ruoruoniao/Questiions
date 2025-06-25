# Questions

## 首先你要知道

* 当前计算机已经安装git/tortoiseGit/CLion/VS2019/VS2022/VSCode, 无需再次安装

## 简要说明:

* 当前除master分支外, 每一个分支为一道题目, 分支名为题目名称, 可以任意选择题目.
* 每个题目中包含了一个Readme.md文件, 用于描述题目要求. 同时, 本文档中也包含了相同的题目要求, 都可以用于参考.
* 无需跟随题目顺序, 尽力而为.

## 题目说明: 

### 题目1: 段错误

* 分支: SegmentationFault
```
Q: 当前是一个模型移动的代码:

* 共15个模型,
* 每一个模型每一次While循环调用一次step, 将经纬高分别 + 1
* 每个模型执行到纬度为90°, 当15个模型都到达90°时, 停止计算

要求: 目前代码不止一处存在问题或不合理导致无法运行, 请修改为能够运行的状态, 并能够输出正确的值. 输出值应为89.
```

### 题目2: 线程

* 分支: Thread

```
Q: 设计一个多线程程序, 其中:

* multiWriter: 三个线程进行写入(调用write()), 一个线程进行消费(将内容打印到控制台)<br/>
* multiReader: 一个线程进行写入(调用write()), 三个线程进行消费(将内容打印到控制台)<br/>

要求: 先入先打印, 程序可持续运行, CPU尽可能只在实际有用时进行消耗
```

### 题目3: 模板

* 分支: Template

```
Q: 当前有三个函数:

* Template::addInt
* Template::addString
* Template::addBool

要求1: 请补全template add函数内部实现, 不可增加函数, 使输入参数为int类型, string类型和bool类型时均能调用到对应的函数(C++ 17).
要求2(可选): 请实现template add_plus函数, 使输入参数为int类型, string类型和bool类型时均能调用到对应的函数.
```

### 题目4: 动态链接库

* 分支: loadLibrary

```
Q: 当前有如下几个文件

* include/library.h
* lib/model.dll
* lib/model.exp
* lib/model.ilk
* lib/model.lib
* lib/model.pdb

要求: 在可执行程序中调用动态库, 运行include/library.h中的run函数.
```

## 补充说明:

* 提交要求: 

  > 按题目要求修改完成后, 在分支中commit, 并回到主分支, 在当前文档末尾修改题目完成情况.

* 提示:

  > 分支切换时千万记得commit, 已经写完的东西丢了会很难受.

* git操作搜索提示:

  > git切换分支(git switch branch)/git提交(git commit)/tortoise git
  

## 题目完成情况:

* 题目1: 未完成
* 题目2: 未完成
* 题目3: 未完成
* 题目4: 未完成
