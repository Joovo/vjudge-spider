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
	int t,a,b,c,m,i,j,sum;
	string str;
	cin>>t;
	for(j=0;j<t;j++)
	{
		sum=0;
		cin>>str;
		a=to_int(str.substr(0,4));
		b=to_int(str.substr(5,2));
		c=to_int(str.substr(8,2));
		if (b==2 && c==29)
			m=4;
		else m=1;
		for(i=a;i<=10000;i+=m)
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