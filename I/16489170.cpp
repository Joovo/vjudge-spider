#include <stdio.h>
#include <math.h>
int main()
{ 
	int t;
	int y,m,d;
	int n;
	int cnt;
	scanf("%d",&t);
	for (int i = 0; i < t; i++)
	{
		n=0;
		scanf("%d-%d-%d",&y,&m,&d);
		cnt=y;
		while(1){
			if ((cnt%4==0 && cnt%100!=0)||cnt%400==0)
			{
				n+=366;
				cnt++;
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