
2018-12-27 

更新了交互模式来输入比赛编号

更新了自动读取题目数量,不需要手动调整

----------------------------

# 概述

以比赛管理员身份爬取该管理员组织的比赛下所有参与人员的代码和榜单情况.

代码实现的是分题号统计 Wrong Answer 的所有代码,编号及简要信息,稍加修改即可实现爬取其他具体信息如代码长度,运行时间等等.

可以在爬虫过程中洞见 https://vjudge.net 的部分业务逻辑.

开发细节:

https://blog.csdn.net/Joovo/article/details/84901503

# 怎样使用

1. '~/save/$ python3 vjudge.py'

2. 根据提示输入比赛编号，账号密码



-----------------------

# Description

Crawl all of  the contest  participants' code and the status as a contest administrator .

The code can download all of code signed 'Wrong Answer' and brief information of status.Simple modifications can be used to crawl other details such as length,runtime,etc.

More details in my blog:
https://blog.csdn.net/Joovo/article/details/84901503

# How to Use

1. '~/save/$ python3 vjudge.py'

2. Enter the contestId , username and password according to the prompt

