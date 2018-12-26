#include<iostream>
using namespace std;
int main ()
{ 
int n,m,i,j;
int s[1000];
int a=0,sum=0;
cin>>n;
for(i=0;i<n;i++)
{cin>>m;
for(j=0;j<m;j++)
{cin>>a;
sum=sum+a;
}
s[i]=sum;
sum=0;
}
for(i=0;i<n-1;i++)
cout<<s[i]<<endl<<endl;
cout<<s[n]<<endl;
return 0;
}