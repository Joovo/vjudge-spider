#include<iostream>
using namespace  std;
  int main ()
{int i,j;
int n,m;
int a[1000];
int x=0,s=0;
cin>>n;
for(i=0;i<n;i++)
{
cin>>m;
for(j=0;j<m;j++)
{
cin>>x;
s=s+x;
}
a[i]=s;
s=0;
}
for(i=0;i<n-1;i++)
cout<<a[i]<<endl<<endl;
cout<<a[i-1]<<endl;
return 0;
}