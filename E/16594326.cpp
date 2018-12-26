#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n%3==0&&n>=3) 
		cout<<"CiCi"<<endl;
		if(n%3!=0)
		cout<<"KiKi"<<endl;
	}
	return 0;
}
		