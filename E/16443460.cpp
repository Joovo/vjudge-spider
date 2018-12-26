#include<iostream>
using namespace std;
int main()
{
	int n;
	int i, j;
	for (j = 1;j<=2;j++)
	{
		cin >> n;
		for (i = 1;;i++)
		{
			if (i % 2 != 0) {
				n = n - pow(2, i - 1);
				if (n <= 0) {
					cout << "Kiki" << endl;
					break;
				}
			}
			else {
				n = n - pow(2, i - 1);
				if (n <= 0) {
					cout << "Cici" << endl;
					break;
				}
			}
		}
	}
	return 0;
}
