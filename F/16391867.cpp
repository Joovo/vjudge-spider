#include <iostream>
#include<cmath>
using namespace std;
int main() {
	int x,y,z,num,s,k;
	k=0;
	for(x=1;x*x<=num;x++)
	{
		for(y=1;y*y<=num;y++)
		{
			for(z=1;z*z<=num;z++)
			{
				if(x*x+y*y+z*z==num) 
				{
				k=1;
				break;}
			}
			if(k==1)break;
		}
			if(k==1)break;
	}
	
	cout<<x<<" "<<y<<" "<<z;
	
	
}