#include<iostream>
using namespace std;
int main()
{
	int n,a=1,sum=0,i=0;
	while(cin>>n)
	{
		while(sum<n)
		{
			sum=sum+a;
			i=i+1;
	        a=a*2;
		}
		if(i%2!=0)
		cout<<"KiKi"<<endl;
		if(i%2==0)
		cout<<"CiCi"<<endl;
		sum=0;
		i=0;
		a=1;
	}
}