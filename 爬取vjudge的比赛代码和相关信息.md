[toc]

github 地址：https://github.com/Joovo/vjudge_spider
# 概述
爬虫的目的是作为 contest 管理员需要统计 contest 下参赛者的错误信息并下载所有参赛者代码。

代码实现的是分题号分别统计 Wrong Answer 的所有代码,编号及简要信息,稍加修改即可实现爬取其他具体信息，如代码长度,运行时间等等.

可以在开发过程中洞见 https://vjudge.net 的部分业务逻辑.

# 开发过程

首先在获取代码前需要代码运行编号，对于榜单的获取是不需要登陆的，构造相应信息得到榜单和代码编号。

从 F12 容易得到 cookies。一般情况是可以直接用来登陆，但不幸的是 vjudge 的 token 换的很快，怀疑是时间戳。

增加 login 的过程，用 requests.Session()来模拟持久化登陆。然而实际上是看不到 login 的过程的...vjudge 在登陆后重新刷新页面，这时候就需要一点操作...输一个错误的密码并提交，就可以看到 login fail 的 response，也即 login 的正确地址。 

# 代码结构
伪代码：
```
create session
login
for each problem：
    crawl status
    parse runId 
    for status:
        crawl code
        parse code
        download code 
        concat  DataFrame
save DataFrame

```
# 源代码
这是一个非常典型的爬虫程序,所以注释不多 ~~才不是懒~~
```py
import requests
import json
import pandas as pd

url = "https://vjudge.net/status/data/"
sess=requests.Session()


# return details list
def crawl(start, length, contestId, num):  # num 为题号
    headers = {
        'authority': 'vjudge.net',
        'method': 'POST',
        'path': '/status/data/',
        'scheme': 'https',
        'accept': "application/json, text/javascript, */*; q=0.01",
        'accept-encoding': "gzip, deflate, br",
        'accept-language': "zh-CN,zh;q=0.9,en;q=0.8",
        'content-length': "1997",
        'conntent-type': 'application/x-www-form-urlencoded; charset=UTF-8',
        'cookie': "_ga=GA1.2.875729057.1541660225; _gid=GA1.2.1325865481.1544165094; JSESSIONID=FD9F33FD3FF4C5E43E0900346ECB2C59; Jax.Q=KidsXH|XQWQZ3BE0IOCMV1T895CCZHIYA0U6M; _gat=1",
        'origin': "https://vjudge.net",
        'referer': "https://vjudge.net/contest/"+contestId,
        'user-agent': "Mozilla/5.0 (X11; Fedora; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/70.0.3538.102 Safari/537.36",
        'x-requested-with': "XMLHttpRequest"
    }

    data = {
        'columns[0][data]': '0',
        'columns[0][name]': '',
        'columns[0][searchable]': 'true',
        'columns[0][orderable]': 'false',
        'columns[0][search][value]': '',
        'columns[0][search][regex]': 'false',
        'columns[1][data]': '1',
        'columns[1][name]': '',
        'columns[1][searchable]': 'true',
        'columns[1][orderable]': 'false',
        'columns[1][search][value]': '',
        'columns[1][search][regex]': 'false',
        'columns[2][data]': '2',
        'columns[2][name]': '',
        'columns[2][searchable]': 'true',
        'columns[2][orderable]': 'false',
        'columns[2][search][value]': '',
        'columns[2][search][regex]': 'false',
        'columns[3][data]': '3',
        'columns[3][name]': '',
        'columns[3][searchable]': 'true',
        'columns[3][orderable]': 'false',
        'columns[3][search][value]': '',
        'columns[3][search][regex]': 'false',
        'columns[4][data]': '4',
        'columns[4][name]': '',
        'columns[4][searchable]': 'true',
        'columns[4][orderable]': 'false',
        'columns[4][search][value]': '',
        'columns[4][search][regex]': 'false',
        'columns[5][data]': '5',
        'columns[5][name]': '',
        'columns[5][searchable]': 'true',
        'columns[5][orderable]': 'false',
        'columns[5][search][value]': '',
        'columns[5][search][regex]': 'false',
        'columns[6][data]': '6',
        'columns[6][name]': '',
        'columns[6][searchable]': 'true',
        'columns[6][orderable]': 'false',
        'columns[6][search][value]': '',
        'columns[6][search][regex]': 'false',
        'columns[7][data]': '7',
        'columns[7][name]': '',
        'columns[7][searchable]': 'true',
        'columns[7][orderable]': 'false',
        'columns[7][search][value]': '',
        'columns[7][search][regex]': 'false',
        'columns[8][data]': '8',
        'columns[8][name]': '',
        'columns[8][searchable]': 'true',
        'columns[8][orderable]': 'false',
        'columns[8][search][value]': '',
        'columns[8][search][regex]': 'false',
        'start': start,
        'length': length,
        'search[value]': '',
        'search[regex]': 'false',
        'un': '',
        'num': num,
        'res': '3',
        'language': '',
        'inContest': 'true',
        'contestId': contestId
    }

    response = sess.request("POST", url, data=data, headers=headers)

    # json_file=open('test.json','w',encoding='utf-8')
    js = response.text
    # json.dump(js,json_file,ensure_ascii=False)
    # json_file.close()
    data = json.loads(js)['data']
    print(data)
    print(len(data))  # 20

    return data


def parse(data, df, num,contestId):
    pro_origin = ''  # 题目来源
    pro_class = ''  # 题目类型
    pro_website = ''  # 题目网址
    this_df_flag = True
    for line in data:
        row = {}
        row['题目来源'] = pro_origin
        row['题目类型'] = pro_class
        row['题目网址'] = pro_website
        row['代码编号'] = line['runId']
        row['错误大类'] = line['statusCanonical']
        row['错误行数'] = ''
        row['错误代码'] = ''
        row['错误标注'] = ''
        if this_df_flag:
            this_df_flag = False
            row['题目来源'] = num
        df.loc[df.shape[0] + 1] = row

        # save cpp
        print(line['runId'])
        print(contestId)
        download_code(contestId,line['runId'],num)
    return df

def login():
    url='https://vjudge.net/user/login'
    header={
        'authority': 'vjudge.net',
        'method': 'POST',
        'path': '/user/login',
        'scheme': 'https',
        'accept': "*/*",
        'accept-encoding': "gzip, deflate, br",
        'accept-language': "zh-CN,zh;q=0.9,en;q=0.8",
        'content-length': "33",
        'content-type': "application/x-www-form-urlencoded; charset=UTF-8",
        'cookie': "_ga=GA1.2.875729057.1541660225; _gid=GA1.2.1325865481.1544165094; JSESSIONID=0BFD3364480A9F4E0AD8FEAB56571D79",
        'origin': "https://vjudge.net",
        'referer': "https://vjudge.net/",
        'user-agent': "Mozilla/5.0 (X11; Fedora; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/70.0.3538.102 Safari/537.36",
        'x-requested-with': "XMLHttpRequest",
    }
    data={
        'username': 'ChangeToYourUsername',
        'password': 'ChangeToYourPassword'
    }
    response=sess.request('POST',url=url,headers=header,data=data)


def download_code(contestId,runId,num):
    start_url = 'https://vjudge.net/solution/data/' + str(runId)
    header = {
        'authority': 'vjudge.net',
        'method': 'POST',
        'path': '/solution/data/' + str(runId),
        'scheme': 'https',
        'accept': "*/*",
        'accept-encoding': "gzip, deflate, br",
        'accept-language': "zh-CN,zh;q=0.9,en;q=0.8",
        'content-length': "0",
        'cookie': "_ga=GA1.2.875729057.1541660225; _gid=GA1.2.1325865481.1544165094; JSESSIONID=F89D8D2FA10077EF490AB34930397EEF; Jax.Q=KidsXH|BDZKLSLS3WSDAQ9L3PDCD8AXA8EQR8",
        'origin': "https://vjudge.net",
        'referer': "https://vjudge.net/contest/"+contestId,
        'user-agent': "Mozilla/5.0 (X11; Fedora; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/70.0.3538.102 Safari/537.36",
        'x-requested-with': "XMLHttpRequest",
    }
    response = sess.request('GET', url=start_url)
    print(response.text)
    file_dir='./'+num+'/'
    file=open(file_dir+str(runId)+'.cpp','w+',encoding='utf-8')
    code=json.loads(response.text)['code']
    file.write(code)
    file.close()


if __name__ == '__main__':
    contestId = '260752'
    login()
    all_df = pd.DataFrame(columns=['题目来源', '题目类型', '题目网址', '代码编号', '错误大类', '错误行数', '错误代码', '错误标注'])
    for _num in range(ord('A'), ord('K')): # problem arange
        num = chr(_num)
        for s in range(0, 500, 20): # participant arange
            start = s
            length = 20
            data = crawl(start, length, contestId, num)
            if len(data) == 0:
                break
            # file=open('标注.csv','w',encoding='utf-8')
            df = pd.DataFrame(columns=['题目来源', '题目类型', '题目网址', '代码编号', '错误大类', '错误行数', '错误代码', '错误标注'])
            df = parse(data, df, num,contestId)
            all_df = pd.concat([all_df, df], axis=0)
    all_df.to_csv('标注.csv', index=False)


```

# 怎样使用

1.手动或用代码创建不同的文件夹

2.修改主函数中的 contestId 为要爬取的题目编号

3.修改 login 函数中的用户名密码为要登陆的管理员相关信息