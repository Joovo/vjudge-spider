#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int a=3;
	while(cin>>n)
	{
		a=3;
		while(n)
		{
			a=(a-1)*2;
			n--;
		}
		cout<<a<<endl;
	}

	return 0;
}