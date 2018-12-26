#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> v;
int cnt;

int main()
{
	ll a;
	while (~scanf("%lld", &a) && a > 0)
	{
		v.clear();
		cnt = 0;
		while (a)
		{
			if (a % 2) v.push_back(1), cnt++;
			else v.push_back(0);
			a /= 2;
		}
		printf("the parity of ");
		for (int i = v.size() - 1; i >= 0; i--) printf("%d", v[i]);
		printf(" is %d (mod 2).\n", cnt);
	}
	return 0;
}