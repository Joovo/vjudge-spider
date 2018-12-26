#include<iostream>
using namespace std;
int main()
{ 
    int num,x,y,z,flag;
    while(cin>>num)
    {
    for(x=0;x*x<num;x++)
    {
    	for (y=0;y*y<num;y++)
    	{
    		for(z=0;z*z<num;z++)
    		{
    			if(x*x+y*y+z*z==num)
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
	flag=0;
	}
       return 0;
} 