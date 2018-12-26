#include <stdio.h>
using namespace std;
int main()
{
    int n, h, i, x, m, sum=0;
    while (scanf("%d\n",&n)!=EOF&&n != 0)
        {scanf("%d",&x);
            for(i =1;i <= x;i++)
            {scanf("%d",&m);
                sum = sum + m;
            }
        printf("%d\n",sum);
        sum = 0;
        }
}