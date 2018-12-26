#include<iostream>
using namespace std;
int main()
{
	int n,x,y,z;
	cin>>n;
	for(x=1;x*x<=n/3;x++)
	{
		for(y=x;y<=n;y++)
		{
			for(z=y;z<=n;z++)
			{
				if(x*x+y*y+z*z==n)
				cout<<x<<" "<<y<<" "<<z<<endl;
			}
		}
	}
	return 0;
} 