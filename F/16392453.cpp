#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	while(cin>>n)
	{
		for(i=1;i*i<=n;i++)
			for(j=i;j*j+i*i<=n;j++)
				for(k=j;j*j+i*i+k*k<=n;k++)
					if(i*i+j*j+k*k==n){
						cout<<i<<" "<<j<<" "<<k;
					}
					i=j=k=0;
	}
	return 0;
}