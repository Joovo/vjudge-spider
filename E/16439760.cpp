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
	int ans=0,p=1,sum=1;
for(int i=0;i<100;i++){
	p=p*2;
	sum+=p;
	ans++;
	if(x>p&&x<p*2&&sum!=x)
	return ans+2;
	else if(x==p&&sum==x)
	return ans+1;
}
}