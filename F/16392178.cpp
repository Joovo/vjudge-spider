#include <iostream>
#include<cmath>
using namespace std;
int main() {
	int x,y,z,num,s,k;
	k=0;
     while(cin>>num)
{
	for(x=1;x<=100;x++)
	{
		for(y=1;y<=100;y++)
		{
			for(z=1;z<=100;z++)
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
	
	cout<<x<<" "<<y<<" "<<z<<endl;
	}
	
}

