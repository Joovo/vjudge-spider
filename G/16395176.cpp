#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while (cin >> m)
    {
        m /= 50;
        int x = m / 3;
        int y = m % 3;
        if (y <= x)
            cout << "0\n";
        else
            cout << (y - x) * 50 << endl;
    }
    return 0;
}
