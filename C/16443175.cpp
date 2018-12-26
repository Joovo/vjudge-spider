#include<iostream>
using namespace std;
int main() {
	int a, b, n, i, s, j, k;
	cin >> n;
	for (i = 1; i <= n; i++) {
		s = 0;
		cin >> k;
		for (j = 1; j <= k; j++) {
			cin >> a; s += a;}
		cout << s << endl; cout << endl;
	}
	s = 0;
	cin >> k;
	for (j = 1; j <= k; j++) { cin >> a; s += a; }
	cout << s << endl;
	return 0;
}