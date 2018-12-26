# include <stdio.h>
int main(void)
{
	int n,a,b,c;
	while(scanf("%d",&n)!=EOF)
	{
		for(a=1; a*a<n; ++a)
		{
			for(b=a; b*b<n; ++b)
			{
				for(c=b; c*c<n; ++c)
				{
					if(a*a+b*b+c*c==n)
					{
						printf("%d %d %d\n",a,b,c);
					} 
				}
			}
		}
	}
	
	
	return 0;
}