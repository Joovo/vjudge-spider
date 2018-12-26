#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
int m;
cin>>m;
int a=0,b;
for(int i=1;i<=m;i++)
{
cin>>b;
a+=b;
}
if(i<m){cout<<a<<endl;
cout<<endl;}
if(i=m)cout<<a<<endl;
}
return 0;
}