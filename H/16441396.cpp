#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;

int dp[10005];
int a[3]={350,200,150};

int main(){
    int t;
    while(cin>>t){
        if(t!=0){
            int len=0,l=0;
            int s[10000];
            while(t!=0){
                s[len]=t%2;
                t/=2;
                len++;
            }
            int i;
            printf("The parity of ");
            for(i=len-1;i>=0;i--){
                printf("%d",s[i]);
            }
            printf(" is %d (mod 2).\n",(int)ceil(1.0*len/2.0));
        }
    }
    return 0;
}



