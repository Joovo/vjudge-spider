#include <iostream>
using namespace std;

int main()
{
	int n,i,a[100],x,b,c;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>b;
		c=3;
		for(x=0;x<b;x++)
		{
			c=(c-1)*2;
		}
		a[i]=c;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}