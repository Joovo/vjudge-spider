#include <iostream>
using namespace std;

int main()
{
	int n,a,b,c[100],i,x,g[100],j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		for(j=0;j<x;j++)
		{
			cin>>g[j];
		}
		for(j=1;j<x;j++)
		{
			g[0]+=g[1];
	 }
	 c[i]=g[0];
	}
	for(i=0;i<n;i++)
	{
		cout<<c[i]<<endl;
	}
	return 0;
}