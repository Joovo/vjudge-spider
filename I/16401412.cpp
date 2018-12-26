#include<stdio.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include<iomanip>
using namespace std;
int turn(int n)
{
	if(n%400==0||n%4==0&&n%100!=0)
		return 1;
	return 0;
}
int main()
{
	int n,i,a,b,c,day;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		if(turn(a))
			day=366;
		else
			day=365;
		a++;
		while(day%7!=0)
		{
			if(turn(a))
				day=day+366;
			else
				day=day+365;
			a++;
		}
		cout<<a<<endl;
	}
	return 0;
}

