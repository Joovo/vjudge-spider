#include <iostream>
using namespace std;
int main(){
	int n,i,j,k,s;
	cin>>n;
	for (i=1;i<=100;i++)
	  for (j=i;j<=100;j++)
	     for (k=j;k<=100;k++)
	     {
	     	s=i*i+j*j+k*k;
	         if (s==n)
	          {
	          	cout<<i<<" "<<j<<" "<<k;
	          	return 0;
	          }
	     }
}