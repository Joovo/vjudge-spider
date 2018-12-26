#include <iostream>
using namespace std;
int main(){
	int n,i,j,k,s;
	cin>>n;
	for (i=1;i<=22;i++)
	  for (j=i;j<=22;j++)
	     for (k=j;k<=22;k++)
	     {
	     	s=i*i+j*j+k*k;
	         if (i*i+j*j+k*k==n) 
	          {
	          	cout<<i<<" "<<j<<" "<<k;
	          	return 0;
	          }
	     }
}