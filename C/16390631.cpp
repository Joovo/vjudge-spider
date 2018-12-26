#include <iostream>
using namespace std;
int main()
{
	int a,c,sum,n,i=1;
	cin>>n;
	for(;i<=n;i++)
	{
		cin>>a;
		for(c=1;c<=a;c++)
			sum=sum+c;
		cout<<c<<endl;
	}
	return 0;
}