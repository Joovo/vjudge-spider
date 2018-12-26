#include <iostream>
using namespace std;

int main()
{
	int N, i = 1, M, j = 1,a, sum = 0;
	cin >> N;
	while (i <= N)
	{
		cin >> M;
		while (j <= M)
		{
			cin >> a;
			sum = sum + a;
			j++;
		}
		cout << sum << endl;
		i++;
	}

	return 0;
}