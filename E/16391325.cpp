#include<iostream>
//#include<cstdio>
using namespace std;

int main()
{
	const int step = 9;
	int exp[step];
	int current = 1;
	for (int i = 0; i < step; i++)
	{
		exp[i] = current;
		current *= 2;
	}
	int x;
	while (cin >> x)
	{
		int result;
		for (int i = 0; i < step - 1; i++)
		{
			if (x < exp[i])
			{
				result = i - 1;
				break;
			}
		}
		if (result %2 == 0)
		{
			cout << "Kiki" << endl;
		}
		else
		{
			cout << "Cici" << endl;
		}
	}

	//system("PAUSE");
	return 0;
}