#include<stdio.h>
#include<math.h>

int pan(int x){
	if(x%4==0&&x%100!=0||x%400==0)
	return 1;
	return 0;
}

int main(){
	int t,T,year,month,day,ji;
	scanf("%d",&T);
	while(T--){	
		scanf("%d-%d-%d",&year,&month,&day);
		if(pan(year)&&month<=2&&day<=29)
		ji=2;
		else
		ji=1;
		for(t=year+1;;t++){
			if(pan(t)==1)
			ji+=2;
			else
			ji+=1;
			if(ji%7==0)
			break;
		}
		printf("%d\n",t+1);
	}
	return 0;
} 