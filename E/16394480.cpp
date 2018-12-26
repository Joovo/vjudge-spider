#include <iostream>
using namespace std;
int main()
{
    
    int m;
    while (cin >> m)
    {
        int ans = 0;
        while (m)
        {
            if (m & 0x1)
                ans++;
            m >>= 1;
        }
        if (ans & 0x1)
            cout << "Kiki\n";
        else
            cout << "Cici\n";
    }
    return 0;
}
