# 简介

以比赛管理员身份爬取该管理员组织的比赛下所有参与人员的代码和榜单情况.

代码实现的是分题号统计Wrong Answer的所有代码,编号及简要信息,稍加修改即可实现爬取其他具体信息如代码长度,运行时间等等.

可以在爬虫过程中洞见 https://vjudge.net 的部分业务逻辑.

开发过程:

https://blog.csdn.net/joovo

# 怎样使用

1.手动或用代码创建不同的文件夹

2.修改主函数中的 contestId 为要爬取的题目编号

3.修改 login 函数中的用户名密码为要登陆的管理员相关信息

-----------------------

# Description

As the contest administrator, can crawl all of  the contest  participants' code and the status.

The code can download all of code signed 'Wrong Answer' and brief information of status.Simple modifications can be used to crawl other details such as length,runtime,etc.

More details in my blog:
https://blog.csdn.net/joovo

# How to Use

1.Create different folders manually or with code

2.Modify the 'contestId' string in the main function to the contest number to be crawled.

3.Modify the 'username' and 'password' in the 'login' function to the administrator's information.

