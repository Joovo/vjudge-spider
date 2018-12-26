#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num,a,b,c,sum;
	cin>>num;
	sum=int(sqrt(num));
	for(a=1;a<=sum;a++)
	{
		for(b=a;b<=sum;b++)
		{
			for(c=b;c<=sum;c++)
			{
				if(a*a+b*b+c*c==num)
				{
					cout<<a<<" "<<b<<" "<<c<<endl;
					break;
				}
			}
		}
	}
	return 0;
}