#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n%3==0)
            cout<<"CiCi"<<endl;
        else
            cout<<"KiKi"<<endl;
    }
    return 0;
}
