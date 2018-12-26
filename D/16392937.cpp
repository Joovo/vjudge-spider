#include<iostream>
using namespace std;
int main()
{
	int n, a,i;
	i=0;
	int s[30];
	s[30]={};
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
	int j;
	for(j=0;j<=30;j++)
		{
			if(s[j]>0)
				cout<<s[j]<<endl;
		}

	return 0;
}