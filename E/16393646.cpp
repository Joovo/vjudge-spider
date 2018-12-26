#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,sum;
	cin>>n;
	for(int i=1;i<=100;i++)
		for(int j=i;j<=100;j++)
			for(int k=j;k<=100;k++)
			{sum=pow(i,2)+pow(j,2)+pow(k,2);
			 if(sum==n) cout<<i<<" "<<j<<" "<<k<<endl;
			}
	return 0;
}