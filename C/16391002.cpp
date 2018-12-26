#include<iostream>
using namespace std;
int main()
{
	int a,n,m,i=0,s=0;
	int b[1000]={};
	cin>>n;
	while(n>0)
	{
		cin>>m;
		while(m>0)
		{
			m-=1;
			cin>>a;
			b[i]+=a;
		}
		i++;
		n-=1;
	}
	if(b[s]>0)
	{
		cout<<b[s];
		s++;
	}
	return 0;
}