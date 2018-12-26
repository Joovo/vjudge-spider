#include<iostream>
#include<cmath>
using namespace std;
int main()
{	
int a,b,n,i,m,j,h;
while(cin>>n)
{
	for(i=1;i<=int(sqrt(n));i++)
	{
		for(j=i;j<=int(sqrt(n)-i*i);j++)
		{
			for(h=j;h<=int(sqrt(n)-j*j);h++)
			{if(i*i+j*j+h*h==n)
			{
				cout<<i<<' '<<j<<' '<<h<<endl;	
				break;
			}
		}
		}
	}
}
return 0;

}