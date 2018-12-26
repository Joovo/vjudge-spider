#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int n;
	int max;
	while(cin>>n)
	{
		for(int i=0;i<=10;i++)
		{
			if(n>=pow(2,i)&&n<=pow(2,i+1))
			{
				max=i;
				break;
			}
		}
		for(int i=max;i>=1;i--)
		{
			n=n%int(pow(2,i)+1);
		}
		if(n==0)cout<<"CiCi"<<endl;
		else cout<<"KiKi"<<endl;	
	}
}