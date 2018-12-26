#include<stdio.h>
int is(int y){
	if((y%4==0 && y%100!=0)||y%400==0)
	return 1;
	else
	return 0;
}
int fun(int d){
	if(d%7==0)
	return 1;
	else
	return 0;
}
int main(){
	int year,month,day;
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int count=0;
		scanf("%d-%d-%d",&year,&month,&day);
		while(1){
			if(month==2 && day==29){
				count=count+365*4+is(year);
				year+=4;
				if(fun(count)) break;
			}
			else if(month>2){
				if(is(year+1)) count+=366;
				else count+=365;
				year++;
				if(fun(count)) break;
			}
			else if(month<=2){
				count=count+365+is(year);
				year++;
				if(fun(count)) break;
			}
		}
		printf("%d\n",year);
	}
	return 0;
	
}