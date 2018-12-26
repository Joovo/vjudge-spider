#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
	int n,a,x,y,z,flag=0;
	while(cin>>a)
	{
		for(x=1;x<=100;x++)
		{
			for(y=1;y<=100;y++)
			{
				for(z=1;z<=100;z++)
				{
					if(pow(x,2)+pow(y,2)+pow(z,2)==a)
					{
						flag=1;
						cout<<x<<" "<<y<<" "<<z<<endl;
						break;
					}
				}
				if(flag==1)
					break;
			}
			if(flag==1)
				break;
		}
	}
	return 0;
}