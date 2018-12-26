#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int T,N,min;
	while((scanf("%d",&T)!=EOF)&&T>=1&&T<=100){
		for(int i=0;i<T;i++){
			scanf("%d",&N);
			if(N>=1&&N<=10000){
				N=N%350;
				N=N%200;
				min=N%150;
				printf("%d\n",min);
			}
		}
	}
}