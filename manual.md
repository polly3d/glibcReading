# glibc概述

## glibc大致内容

只能是说大致内容，因为资料也是在网上找的。

glibc是gnu发布的libc库，也即c运行库。当然还有其他c运行库，这个就不说了。glibc是linux系统中最底层的api，几乎其它任何的运行库都依赖于glibc。gblic除了封装linux操作系统所提供的系统服务外，它本身也提供了许多其它一些必要的功能的实现，主要如下：

* string，字符串处理
* signal，信号处理
* dlfcn，管理共享库的动态加载
* direct，文件目录操作
* elf，共享库的动态加载器
* iconv，不同字符集的编码转换
* inet，socket接口的实现
* intl，国际化
* io
* linuxthreads
* locale，本地化
* login，虚拟终端设备的管理及系统的安全访问
* malloc，动态内存的分配与管理
* nis
* stdlib，其他基本功能