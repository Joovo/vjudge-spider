#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(;n>0;n--)
	{
		long long N;
		cin>>N;
		N=N-(N/350)*350;
		N=N-(N/200)*200;
		N=N-(N/150)*150;
		cout<<N<<endl;
	}
	return 0;
}