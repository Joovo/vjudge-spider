#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int c, t, n, m, i;
	while (cin >> m)
	{
		t = 0;
	c = 1;
		while (m > 0)
		{
			m = m - c;
			c = c * 2;
			t++;
		}
		if (t % 2 == 1)
			cout << "KiKi"<<endl;
		else
			cout << "CiCi"<<endl;
	}
	return 0;
}
