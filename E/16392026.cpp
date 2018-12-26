#include<iostream>
using namespace std;
int main()
{
	int a[10000]={};
	a[1] = 1; a[2] = 1;
	int n = 3;
	while (n<=1000)
	{
		int m = n;
		int i = 1;
		while (m<=1000)
		{
			a[n + i] = 1;
			m = m + i;
			i = i * 2;			
		}
		m = n;
		int num = 0;
		for (int i = m+1;i<=1000;i++)		if (a[i] == 0)		{			n = i;		num = 1;		break;		}
		if (num == 0) break;
	}
	while (cin>>n)
	{
		if (a[n] == 1) cout<<"KiKi"<<endl;
		else cout<<"CiCi";
	}
}