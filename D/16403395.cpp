#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int main(){
    int n,a;
    int sum=3;
    for(int i=0;i<n;i++){
        cin>>a;
        while(a-->0){
            sum=(sum-1)*2;
        }
        cout<<sum<<endl;
    }
    return 0;
}
