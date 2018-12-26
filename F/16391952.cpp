#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,y,z,n,i=0,temp,t;
	while(cin>>n)
	{
		temp=sqrt(n/3);
		t=sqrt(n);
		for(x=1;x<=t;x++)
		{
			for(y=x;y<=t;y++)
			{
				for(z=y;z<=t;z++)
				{
					if(x*x+y*y+z*z==n)
					{
					cout<<x<<" "<<y<<" "<<z<<endl;
					i=1;
					break;
					}
				}
				if(i) break;
			}
			if (i) break;
		}
	}
	return 0;
}