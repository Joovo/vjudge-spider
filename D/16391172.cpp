#include <iostream>
#include <cstdio>
#include <math.h>
#define pi 3.14
using namespace std;
int main()
{
	int n1,n2,a,b;
	scanf("%d",&n1);
	for(b=3;n1;n1--)
	{
		scanf("%d",&a);
		for(;a;a--){
			printf("%d",(b-1)*2);
		}
	}
}