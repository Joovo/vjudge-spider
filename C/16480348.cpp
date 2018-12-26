#include<iostream>
using namespace std;
int main()
{int i,j;
int n,m;
int a[1000];
int x,s=0;
cin>>m;
for(j=0;j<m;j++)
{
cin>>x;
s=s+x;
}
for(i=0;i<n;i++)
cout<<a[i]<<endl;
return 0;
}