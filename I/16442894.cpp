#include <stdio.h>
int year,month,day;
int judge(int year,int month,int day)
{
	if(month==1||month==2)
	{
		month+=12;
		year--;
	}
	int c=year/100;
	int y=year-c*100;
	int week=(c/4)-2*c+(y+y/4)+(13*(month+1)/5)+day-1;

	while(week<0)
	{
		week+=7;
	}
	week%=7;
	return week;
}
int main()
{
	int n;

	scanf("%d",&n);
	while(n--)
	{
		scanf("%d-%d-%d",&year,&month,&day);
		int w1=judge(year,month,day);
		int w2=-1;
		while(w1!=w2)
		{
			w2=judge(++year,month,day);
		}
		printf("%04d\n",year);

	}
	return 0;
}