#include <stdio.h>
#include <math.h>
int dayscla(int y,int m,int d){
	int n;
	int j,k;
	n=0;
	for (j=2017; j<y; j++)
	{
		if ((j%4==0 && j%100!=0)||(j%400==0))
		{
			n+=366;
			
		}
		else{
			n+=365;
		}
		
	}
	for (k = 1; k <m; k++)
	{
		switch(m){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			n+=31;
			break;
			case 4:
			case 6:
			case 9:
			case 11:
			n+=30;
			break;
			case 2:{
				if ((y%4==0 && y%100!=0)||(y%400==0))
				{
					n+=29;
					break;
				}
				else
				{
					n+=28;
					break;
				}
			}
			
		}
	}
	n+=d;
	return n;

}
int main()
{ 
	int t;
	int n;
	int n1;
	int y,m,d;
	int i,j;
	scanf("%d",&t);
	
	for (i = 0; i < t; i++)
	{
		scanf("%d-%d-%d",&y,&m,&d);
		n=dayscla(y,m,d);
		for (j =y; j <9999; j++)
		{
			n1=dayscla(j,m,d);
			if (j!=y&&n1%7==n%7)
			{
				printf("%d\n", j);
				break;
			}
		}

	}

	return 0 ;
}