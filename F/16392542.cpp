#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,sum,k=0;
	while(cin>>a)
	{
	 k=0;
	for(int i=1;i<=100;i++)
	{
		if(k==1)
		break;
		for(int j=i;j<100;j++)
		{
			for(int h=j;h<100;h++)
			{
				if(i*i+j*j+h*h==a)
				{
				 cout<<i<<" "<<j<<" "<<h<<endl;
				 k=1;
			    
				}
			}
			
		}
	}
    
	}
   
}