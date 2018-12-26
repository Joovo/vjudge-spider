#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;

bool judge(int y){
    if(y%400==0||(y%4==0&&y%100!=0))
        return true;
    return false;
}

int main(){
    int t;
    while(cin>>t){
        int yyyy,mm,dd;
        for(int i=0;i<t;i++){
            scanf("%d-%d-%d",&yyyy,&mm,&dd);
            bool flag=judge(yyyy);
            int sum=0;
            do{
                sum++;
                yyyy++;
                if(judge(yyyy-1))
                    sum++;
            }
            while(sum%7!=0);
            cout<<yyyy<<endl;
        }
    }
    return 0;
}



