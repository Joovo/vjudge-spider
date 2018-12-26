#include<iostream>
using namespace std;
int main()
{
	int a[1001],n,i,j,s=0,x,m;
	while(cin>>n)
	for(i=1;i<=n;i++)
	{
		cin>>m;
		for(j=1;j<=m;j++)
		{
			cin>>x;
		    s+=x;
		}
		a[i]=s;
		s=0;
	}
	for(i=1;i<=n-1;i++)
		cout<<a[i]<<endl<<endl;
	    cout<<a[n-1]<<endl;
	return 0;
}