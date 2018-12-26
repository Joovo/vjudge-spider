#include <iostream>
using namespace std;
int main(){
	int n,i,j,k;
	long long s;
	cin>>n;
	for (i=1;i<=10000;i++)
	  for (j=i;j<=10000;j++)
	     for (k=j;k<=10000;k++)
	     {
	     	s=i*i+j*j+k*k;
	         if (i*i+j*j+k*k==n) 
	          {
	          	cout<<i<<" "<<j<<" "<<k<<endl;
	          	return 0;
	          }
	     }
}