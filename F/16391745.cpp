#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,y,z,n,j,k,temp,t;
	while(cin>>n)
	{
		temp=sqrt(n/3);
		t=sqrt(n);
		for(x=1;x<=temp;x++)
		{
			for(y=x;y<=t;y++)
			{
				for(z=y;z<=t;z++)
				{
					if(x*x+y*y+z*z==n)
					cout<<x<<" "<<y<<" "<<z<<endl;
					break;
				}
			}
		}
	}
	return 0;
}