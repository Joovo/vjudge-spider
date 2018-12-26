#include <iostream>
using namespace std;

int main()
{
	int N, i = 1, M, j = 1;
	cin >> N;
	while (i <= N)
	{
		int sum = 0;
		cin >> M;
		while (j <= M)
		{
			sum = sum + j++;
		}
		cout << sum << endl;
		j = 1;
		i++;
	}

	return 0;
}