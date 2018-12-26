#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int  m;
	while (~scanf("%d",&m))
	{
		if (m % 3 == 1)
			cout << "KiKi"<<endl;
		else
			cout << "CiCi"<<endl;
	}
	return 0;
}
