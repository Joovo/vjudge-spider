#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int c, t, a,n, m,j, i;
	j = 0;
	a = 0;
	while (cin >> m&&m>0)
	{
		a++;
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
