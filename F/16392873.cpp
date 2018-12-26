#include <iostream>
# include <cmath>
using namespace std;
int main()
{
	int n,x,y,z;
	while(cin>>n)
	{
		for(x=1;x<sqrt(n);x++)
		{
			for(y=1;y<sqrt(n);y++)
			{
				for(z=1;z<sqrt(n);z++)
				if(x*x+y*y+z*z==n) cout<<x<<y<<z<<endl;break;
			}
		}
	}
 } 