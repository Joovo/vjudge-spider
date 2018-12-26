#include<iostream>
using namespace std;
int main(){
    int t,n,a,b,c,m;
    cin>>t;
    for(int i=0;i<t;i++){
        a=0;
        b=0;
        c=0;
        cin>>n;
        a=n/350;
        b=(n-a*350)/200;
        c=(n-a*350-b*200)/150;
        m=n-a*350-b*200-c*150;
        cout<<m<<endl;
    }
     return 0;
 }