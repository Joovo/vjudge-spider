#include <stdio.h>
#include <math.h>
int main()
{ 
	int t;
	int i;
	int y,m,d;
	int n;
	int cnt;
	scanf("%d",&t);
	for (i = 0; i < t; i++)
	{
		n=0;
		scanf("%d-%d-%d",&y,&m,&d);
		cnt=y;
		while(1){
			if(((cnt%4==0 && cnt%100!=0)||(cnt%400==0))&&m<=2&&d!=29)
			{
				n+=366;
				cnt++;
			}
			else if ((((cnt+1)%4==0 && (cnt+1)%100!=0)||((cnt+1)%400==0))&&m>2)
			{
				n+=366;
				cnt++;
			}
			else  if (((cnt%4==0 && cnt%100!=0)||(cnt%400==0))&&m==2&&d==29)
			{
				n+=365*4;
				cnt+=4;
				
			}
			else{
				n+=365;
				cnt++;
			}

			if (n%7==0)
			{	
				printf("%d\n",cnt);
				break;
			}
		}
	}

	return 0 ;
}