#include<iostream>
using namespace std; 
int main()
{
	int i,j,n,x,z,a,c,b,d;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		a=0;
		cin>>x;
		for(j=0;j<=x/150;j++)
		{
			if((x-150*j)%200==0)
			{
			cout<<0;
			a=a+1;
			break;
			}
		}
		if(a==0)
		{
		z=x%350;
		a=z%200;
		b=z%150;
		c=x%150;
		d=x%200;
		if(a>b)a=b;
		if(a>c)a=c;
		if(a>d)a=d;
		cout<<a;
		}
		if(n<i)cout<<endl; 
	}
}