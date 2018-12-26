#include <iostream>
using namespace std;

int main()
{
	int n, num;
	while(cin >> n)
	{
		num = 0;
		while(n > 0)
		{
			num += n & 1;
			n = n >> 1;
		}
		if(num % 2 == 1)
		{
			cout << "Kiki" << endl;
		} else {
			cout << "Cici" << endl;
		}
	}
	
	return 0;
}