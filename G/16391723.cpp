#include<iostream>
#include<cstring>
using namespace std; 
int main() {
int i,j,n,x;
int a[3];
int f[100000];
memset(f,0,sizeof(f));
a[1]=150;a[2]=350;a[3]=200; 
for (i=1;i<=3;i++)
   for (j=a[i];j<=10000;j++) if (f[j]<f[j-a[i]]+a[i]) f[j]= f[j-a[i]]+a[i]; 
cin>>n;
  for (i=1;i<=n;i++) {
  cin>>x;
  cout<<x-f[x]<<endl;
  }
  return 0;
} 
 