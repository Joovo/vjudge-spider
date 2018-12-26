#include<iostream>
using namespace std;
int main()
{
	int i=0;
	while(i<1000)
	{
		int n;
		cin>>n;
		if(n%3==0)
			cout<<"CiCi"<<endl;
		else
			cout<<"KiKi"<<endl;
			i++;
	}
	return 0;
}