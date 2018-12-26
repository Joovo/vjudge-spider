#include<iostream>
using namespace std;
int main ()
{ 
int n,m,a,i=0,j=0;
int sum[1000];
cin>>n;
for(i=0;i<n;i++)
{cin>>m;
for(j=0;j<m;j++)
{cin>>a;
sum[i]=sum[i]+a;
}
}
for(i=0;i<n;i++)
{cout<<sum[i]<<endl;
}
return 0;
}