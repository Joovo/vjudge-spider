#include <iostream>
using namespace std;
int main()
{
	int i,j ,N, M, a=0;
		cin >> N;
	for (i = 0; i < N; i++)
	{
		while (cin >> M)
			for (j = 1; j <= M; j++)
				a += j;
		cout<<a;
	}
	return 0;
}