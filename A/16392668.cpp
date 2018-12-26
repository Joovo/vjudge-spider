#include <iostream>
using namespace std;
int main()
{
	int N,a,b;
	int x[100];
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		cin>>a;
		int sum=0;
		for(int j=1;j<=a;j++)
		{
			cin>>b;
			sum+=b;
		}
		x[i]=sum;
	}
	for(int i=1;i<=N;i++)
		{
		cout<<x[i]<<endl;
		cout<<endl;
		}
	return 0;
}