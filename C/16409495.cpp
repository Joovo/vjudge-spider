# include <iostream>
# include <cstdio>
# include <cmath>
# include <string>
# include <cstring>
using namespace std;
int main(void)
{
	int n,m,a;
	int sum[1000]={0};
	cin>>n;
	for(int i=1; i<=n; ++i)
	{
		cin>>m;
		for(int j=1; j<=m; ++j)
		{
			cin>>a;
			sum[i]=sum[i]+a;
		}
	}
	for(int b=1; b<=n; ++b)
	{
                 if(b==n)
                 cout<<sum[n]<<endl;
   		cout<<sum[b]<<endl<<endl;
		
	}
	
	return 0;
 } 