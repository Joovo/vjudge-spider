#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
int shi(int x);
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
	if(shi(n)%2==0)
	printf("Cici\n");
	else
	printf("Kiki\n");}
	return 0;	
}
int shi(int x){
	int sum=1;
	if(x==1)
	return 1;
	else
	{while(x!=1){
		x=x/2;
		sum++;
			}
	}
	return sum;
}
 