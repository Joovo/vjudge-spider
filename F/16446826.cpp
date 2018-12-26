#include <stdio.h>
#include <math.h>
int main()
{ 
	int x,y,z;
	int n;
	int Judge;
	while(scanf("%d",&n)!=EOF)
	{
		
		for(int i=0;i<=10000;i++){
			for(int j=0;j<=10000;j++){
				for(int k=0;k<=10000;k++){
					if (i*i+j*j+k*k==n)
					{
						printf("%d %d %d\n", i,j,k);
						goto end;
					}
				}
			}
		}
	}
	end:
	return 0 ;
}