#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int to_int(string n)
{
	stringstream ss;
	int a;
	ss<<n;
	ss>>a;
	return a;
}
int main()
{
	int t,a,i,j,sum;
	string str;
	cin>>t;
	for(j=0;j<t;j++)
	{
		cin>>str;
		a=to_int(str.substr(0,4));
		for(i=a;i<i+1000;i++)
		{
			if((i%4==0 && i%100!=0) || i%400==0)
				sum+=366;
			else sum+=365;
			if (sum%7==0)
			{
				cout<<i+1<<endl;
				break;
			}
		}
	}
	return 0;
}