#include<iostream>
using namespace std;
int main() {
int n,x,i,j,k;
  cin>>n;
  for (i=1;i<=100;i++)
     for (j=1;j<=100;j++)
	    for (k=1;k<=100;k++)
		    if (i*i+j*j+k*k==n) cout<<i<<' '<<j<<' '<<k<<endl;
	return 0; 
return 0;
} 