#include <stdio.h>

int main()
{
	int n;
	int a;
	int sum=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		sum=(a+1)*2;
		printf("%d\n",sum);
		
	}
	return 0;
}