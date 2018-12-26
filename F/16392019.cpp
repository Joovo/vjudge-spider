#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,y,z,n,i=0,temp,t;
	while(cin>>n)
	{
		for(x=1;x<=100;x++)
		{
			for(y=x;y<=100;y++)
			{
				for(z=y;z<=100;z++)
				{
					if(x*x+y*y+z*z==n)
					{
					i=1;
					break;
					}
				}
				if(i) break;
			}
			if (i) break;
		}
		cout<<x<<" "<<y<<" "<<z<<endl;
	}
	return 0;
}