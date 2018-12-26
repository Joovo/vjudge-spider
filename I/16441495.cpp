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
        for(int j=0;j<t;j++){
            scanf("%d-%d-%d",&yyyy,&mm,&dd);
            bool flag=judge(yyyy);
            int sum=0,i;
            if(mm==2&&dd==29){
                for(i=yyyy+1;;i++){
                    if(judge(i))
                        sum+=366;
                    else
                        sum+=365;
                    sum%=7;
                    if(judge(i)&&sum==0)
                        break;
                }
                printf("%d\n",i);
            }
            else if(mm<=2){
                for(i=yyyy;;i++){
                    if(judge(i))
                        sum+=366;
                    else
                        sum+=365;
                    sum%=7;
                    if(sum==0)
                        break;
                }
                printf("%d\n",i+1);
            }
            else{
                for(i=yyyy;;i++){
                    if(judge(i))
                        sum+=366;
                    else
                        sum+=365;
                    sum%=7;
                    if(sum==0)
                        break;
                }
                printf("%d\n",i);
            }
        }
    }
    return 0;
}



