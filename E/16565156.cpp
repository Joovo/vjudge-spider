#include<stdio.h>
int main(){
	int a,b,n;
	while(scanf("%d",&n)!=EOF){
		for(int i=1;i<=n;i*=2){
			if(n-i==0){
				printf("Kiki");
				break;
			}
			else{
				for(int j=1;j<=n;j*=2){
					if(n-i-j==0){
						printf("Cici");
						break;
					}
				}
			}
		}
	}	
	return 0;
} 