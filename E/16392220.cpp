#include<iostream>
#include<cstdio>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n%2==0||n==1){
			printf("Kiki\n");
		}
		else if((n-1)%2==0||(n-2)%2==1){
			printf("Kiki\n");
		}
		else{
			printf("Cici\n");
		}
			
		
	}
	return 0;
}