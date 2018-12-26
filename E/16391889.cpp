#include <iostream>
#include <cstdio>
#include <math.h>
#define pi 3.14
using namespace std;
int main()
{
	int n1,n2,a,b;
	int i=1;
	while(scanf("%d",&a)!=EOF){
		for(;a>0;){
		a-=pow(2,i);
		i++;
		}
	if (i%2==0)
	{printf("Kiki\n");}
	else
	printf("Cici\n");
	i=1;
	}
}