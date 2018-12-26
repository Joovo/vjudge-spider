#include<iostream>
using namespace std;
int main()
{
	int a,n,m,i=0;
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
	for(i=0;i<n;i++)
	cout<<b[i]<<endl;
	return 0;
}