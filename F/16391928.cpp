//#include"bits/stdc++.h"
#include<iostream>
#include<string.h>
#include<algorithm>
#include<cstdio>
using namespace std;
int a[200];
int main()
{
	int i,j,k,sum;
	for(i=0;i<=100;i++)a[i]=i*i;
	while(scanf("%d",&sum)!=EOF){
		int flag=1;
		for(i=0;i<=100&&flag;i++)
			for(j=0;j<=100&&flag;j++)
				for(k=0;k<=100&&flag;k++){
					if(a[i]+a[j]+a[k]==sum){
						flag=0;
						printf("%d %d %d\n",i,j,k);
					}
				}
	}
	
}