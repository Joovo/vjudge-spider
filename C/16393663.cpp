#include<stdio.h>
using namespace std;
 int main()
 {
	 int n, sum;
	while(scanf("%d",&n)!=EOF)
	{int x;
	sum=0;
	while(n--)
	{scanf("%d",&x);
	sum+=x;
	}
	printf("%d\n",sum);
	}
	return 0;
 }
