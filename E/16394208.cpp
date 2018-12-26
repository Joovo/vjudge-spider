#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
int shi(int x);
int main(){
	int n;
	cin>>n;
	if(shi(n)%2==0)
	printf("Cici");
	else
	printf("Kiki");
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
 