#include<iostream>
using namespace std;
int main()
{
	int x,y,z,m,i;
	cin>>m;
	i=0;
	for(x=0;x>0;x++)
		{ 
			for(y=0;y>0;y++)
			for(z=0;z>0;z++)
				if(x^2+y^2+z^2==m)
				{
					cout<<x<<y<<z;
					i+=1;
				}
	if(i!=0)break;
	}
	return 0;
}