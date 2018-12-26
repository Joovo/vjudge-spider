#include<iostream> 
using namespace std;
int main()
{
	int n,i,m,a[100],j,sum[100];
	cin>>n;
	for(j=1;j<=n;j++)
	{
		cin>>m;
		sum[j]=0;
		for(i=0;i<=m-1;i++)
		{
			cin>>a[i];
			sum[j]=sum[j]+a[i];
		}
	}
	for(j=1;j<=n;j++)
	{
	if(j<n) cout<<sum[j]<<endl<<endl;
	else cout<<endl;
    }
	return 0;
}