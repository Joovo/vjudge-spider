#include <iostream>
using namespace std;
int main()
{
   int n,a[100];
   while(cin>>n)
   {
   	 for(int i=1;i<=n;i++)
   	 {
		cin>>a[i];
   	 while(a[i]>=350)	a[i]=a[i]-350;
      while(a[i]>=200)  a[i]=a[i]-200;
      while(a[i]>=100)  a[i]=a[i]-150;
    }
    for(int p=1;p<=n;p++)  cout<<a[p]<<endl;
   }
 } 