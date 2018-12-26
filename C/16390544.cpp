#include<iostream> 
using namespace std;
int main()
{
	int n,i,a[100],j,sum[100];
	cin>>n;
	for(j=0;j<n;j++)
	{
		cin>>i;
		sum[j]=0;
		for(n=0;n<=i-1;n++)
		{
			cin>>a[n];
			sum[j]=sum[j]+a[n];
		}
	}
	for(j=0;j<n;j++)
	cout<<sum[j]<<endl;

	return 0;
}