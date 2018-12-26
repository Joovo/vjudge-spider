#include<iostream>
using namespace std;
int main()
{
	int N,a,i;
	cin>>N>>a;
	for(i=1;i<=N;i++)
	{
		a=(a-1)*2;
		cout<<a<<endl;
	}
	return 0;
}