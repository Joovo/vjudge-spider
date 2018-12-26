#include <iostream>
using namespace std;
int main()
{
	int b,j,n,i=1;
	int sum=0;
	int a[20];
	cin>>n;
	for(;i<=n;i++)
	{
		cin>>b;
		for(j=0;j<b;j++)
			{cin>>a[j];
			 sum=sum+a[j];}
			cout<<sum<<endl;
			cout<<endl;
	}
	return 0;
}