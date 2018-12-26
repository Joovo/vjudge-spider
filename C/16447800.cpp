#include <iostream>
using namespace std;

int main()
{
	int  n, k, s, sum = 0;
	cin >> n;

	while (n--)
	{
		cin >> k;
		for (int i = k; i >=0 ; i--)
		{
			cin >> s;
			sum += s;
			cout << sum << endl;
		}
		sum = 0;
	}

    return 0;
}