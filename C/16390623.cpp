#include<iostream>
using namespace std;
int main()
{
	int a,b,n,m;
	b=0;
	cin>>n;
	while(n>0)
	{
		cin>>m;
		while(m>0)
		{
			m-=1;
			cin>>a;
			b+=a;
		}

		n-=1;
		cout<<b<<endl;
	}
	return 0;
}