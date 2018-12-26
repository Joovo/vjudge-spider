#include <iostream>
using namespace std;
int main()
{
	int n,m=1,a,b,k,sum;
	cin>>n;
	while(m<=n)
	{
		cin>>b;
		k=1;
		sum=0;
		while(k<=b)
		{
			cin>>a;
			sum=sum+a;
			k++;
		}
		if(m<n)
		cout<<sum<<endl<<endl;
		else(m==n);
		cout<<sum;
		m++;
	}
	return 0;
}