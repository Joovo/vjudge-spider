#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int T,N,N1;
	int min=10000;
	while(scanf("%d",&T)!=EOF){
		if(T>=1&&T<=30){
			for(int i=0;i<T;i++){
				scanf("%d",&N);
				if(N>=1&&N<=10000){
					N=N%4200;
					for(int x=0;x<=24;x++){
						for(int y=0;y<=21;y++){
							for(int z=0;z<=12;z++){
								N1=N-150*x-200*y-350*z;
								if(N1<min&&N1>=0){
									min=N1;
									
								}
							}
						}
					}
					cout<<min<<endl;
				}
				min=10000;
			}
		}
	}
} 