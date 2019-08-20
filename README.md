# fuse-zip
this is a mirror  of agalanin/fuse-zip from BitBucket https://bitbucket.org/agalanin/fuse-zip . 

在镜像的基础上，添加了功能限制:  
1. 获取通过fuse 访问文件的 进程的pid
2. 根据pid 获取程序的路径
3. 计算程序的 MD5 (或者进程名) 等方式，限制访问fuse文件系统的进程的合法性。
