#include<stdio.h>
#include<string.h>

int main(){
	int t,n,a[10],ji;
	a[0]=1;
	for(t=1;t<10;t++)
	a[t]=2*a[t-1];
	while(scanf("%d",&n)!=EOF){
		ji=0;
		for(t=0;;t++){
			ji+=a[t];
			if(ji>=n)
			break;
		}
		if(t%2)
		printf("Cici\n");
		else
		printf("Kiki\n");
	}
	return 0;
} 