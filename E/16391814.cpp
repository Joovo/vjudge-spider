#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int i=0,k=0;
	while(scanf("%d",&n)!=EOF)
	{
		i=0;k=0;
		while(n>0)
		{
			k=pow(2,i);
			n=n-k;
			i++;
		}
		if(i%2==0)
			printf("Cici\n");
		else
			printf("Kiki\n");
	}

	return 0;
}