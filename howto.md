# 如何阅读glibc库

## 缘由

之所以看glibc库，是因为想学习c语言。学习c语言，最好的办法，就是直接上代码。于是在知乎上找到了这样一个帖子[请推荐一些小型c语言开源项目](https://www.zhihu.com/question/20792016)。
为啥一开始不找 `如何学习c语言`、`c语言程序入门` ，或者直接找本书按照里面的内容去学习呢？个人感觉，看入门还如直接看项目代码来的实在。当然，书肯定是要看的。只是在看书之前，对某些东西已经有理解的话，相信看书将会更加的投入。

当然，在这里，也不会把所有的glibc库的代码都完完整整看完，只能是挑部分来阅读。只要达到对c语言的熟悉和常用库的理解，就好了。

## 如何看

接下来，进入正题: `如何阅读glibc库`。

借鉴就是最好的老师。为了这个问题，花了不少时间在网络上查找答案。结果，资料少的可怜。一个原因，可能是glibc库的代码量比较大，另外一个原因可能是读glibc这种方式本身不对。没关系，暂时就按着这样的路子来，实在看不下去了再说嘛！万一看完了，哈哈哈！

在少的可怜的资料中，有一种方案是比较可行的。

`通过看glibc里面的bug文件来理解`

顾名思义，bug文件是glibc中以bug开头的文件，这些文件主要是用来测试bug的。这些文件的最大好处就是可以直接运行！！！

大概就是这个样子了，那么开始学吧！！！