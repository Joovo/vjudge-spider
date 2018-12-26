#include<iostream>
using namespace std;
int main()
{
	int n,i;
	while(cin>>n)
	{
		for(int a=1;a*a<=n;a++)
		{
			for(int b=a;b*b<=n;b++)
			{
				for(int c=b;c*c<=n;c++)
				{
					if(a*a+b*b+c*c==n)
					{cout<<a<<" "<<b<<" "<<c<<" ";
					i=1;
					break;}
				}
				if(i) break;
			}
			if(i) break;
		}
	}
}
