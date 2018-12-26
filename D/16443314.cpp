#include<iostream>
using namespace std;
int main()
{
	int a, n, b;
	int i;
	cin >> n;
	a = 3;
	for (i = 1;i <= n;i++)
	{
		cout << i << endl;
		a = (a - 1) * 2;
		cout << a << endl;
	}
	return 0;
}