#include<iostream>
using namespace std;
int main()
{
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		if(num>=1&&num<150)
		cout<<num<<endl;
		else if(num>150&&num<200)
		cout<<num%150<<endl;
		else if(num>200&&num<300)
		cout<<num%200<<endl;
		else if(num>350)
		{
			if(num%50==0)
			cout<<"o"<<endl;
			else
			cout<<num%50<<endl;
		}
		else
		cout<<"0"<<endl;
	}
}