#include <stdio.h>
#include <math.h>
int main()
{ 
	int n;
	int temp=1;
	int cnt=0;
	int kikisum=0;
	int cicisum=0;
	while(scanf("%d",&n)!=EOF)
	{
		kikisum=0;
		cicisum=0;
		while(n>0)
		{
			
			if (n-temp<=0)
			{
				temp=n;
			}
			if (cnt%2==0)
			{
				kikisum+=temp;
			}
			else{
				cicisum+=temp;
			}
			
			n=n-temp;
			temp=temp*2;
			cnt++;
		}
		//printf("%d\n", kikisum);
		//printf("%d\n",cicisum);
		if (kikisum>cicisum)
		{
			printf("Kiki\n");
		}
		else if(cicisum>kikisum)
		{
			printf("Cici\n");

		}
	}
}