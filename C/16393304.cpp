#include <iostream>
using namespace std;
 
int main()
{
	int N;
	while(cin >> N && N )
	{
		int sum = 0;
		while (N--)
		{
			int i;
			cin >> i;
			sum += i;
		}
		cout << sum << endl;
	}
 
	return 0;
}
