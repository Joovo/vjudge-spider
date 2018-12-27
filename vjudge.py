import requests
import json
import pandas as pd
import os
from lxml import etree

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

def login(username,password):
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
        'username': username,
        'password': password
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


def get_problem_list(contestId):
    response=sess.get('https://vjudge.net/contest/'+contestId)
    tree=etree.HTML(response.text)
    problem_xpath='//*[@id="contest-problems"]/tbody/tr/td[4]/a/text()'
    #*[@id="contest-problems"]/tbody/tr[1]/td[4]/a
    problem=tree.xpath(problem_xpath)
    problem=[chr(i+ord('A'))+' - '+ problem[i].strip() for i in range(len(problem))]
    return problem
    
    

if __name__ == '__main__':
    print('输入爬取的比赛编号(contestId)：')
    contestId=input('-->')
    print('输入账号：')
    username=input('-->')
    print('输入密码：')
    password=input('-->')
    # 260752
    login(username,password)
    problem_list=get_problem_list(contestId)
    problem_list=[chr(i+ord('A')) for i in range(len(problem_list))]
    all_df = pd.DataFrame(columns=['题目来源', '题目类型', '题目网址', '代码编号', '错误大类', '错误行数', '错误代码', '错误标注'])
    for num in problem_list: # problem arange
        save_path='./'+num
        if not os.path.isdir(save_path):
            os.mkdir(num)
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
    for i in problem_list:
        os.rename(i[0],i)
