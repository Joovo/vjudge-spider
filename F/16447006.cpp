#include <stdio.h>
#include <math.h>
int main()
{ 
	int x,y,z;
	int n;
	int Judge;
	while(scanf("%d",&n)!=EOF)
	{
		
		for(int i=1;i*i<n;i++){
			for(int j=i;j*j<n;j++){
				for(int k=j;k*k<n;k++){
					if (i*i+j*j+k*k==n)
					{
						printf("%d %d %d\n", i,j,k);
						goto end;
					}
				}
			}
		}
	}
	end:;
	return 0 ;
}