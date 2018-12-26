#include <stdio.h>
int main()
{
	int n,m;
	int a;
	int sum=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		while(m--)
		{
			scanf("%d",&a);
			sum+=a;
		}
		printf("%d\n",sum);
		printf("\n");
	}
	return 0;
}