#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int i,a,b,c,d;
		for(i=0;n>0;i++)
		{
			for(a=9;;a--)
			if(n>pow(2,a)) 
			{
				n-=pow(2,a);
				break;
			}
		}
		if(i%2==1) cout<<"Kiki"<<endl;
		else cout<<"Cici"<<endl;
	}
	return 0;
}