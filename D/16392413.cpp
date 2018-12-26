#include<iostream>
using namespace std;
int main()
{
	int n, a,i;
	i=0;
	int s[30]={};
	cin>>n;
	while(n>0)
	{
		n-=1;
		cin>>a;
		while(a>0)
		{
			a-=1;
			s[i]-=1;
			s[i]*=2;
		}
		i++;
	}
	for(i=0;i<=30;i++)
		if(s[i]>0)
		cout<<s[i]<<endl;
	return 0;
}