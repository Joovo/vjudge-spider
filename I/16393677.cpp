#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int n,nian,yue,ri,tian;
	cin>>n;
	while (n--)
	{
		scanf("%d-%d-%d",&nian,&yue,&ri);
		int tian=0;
		if (yue>2)
		{

		do{
			nian=nian+1;
			if ((nian%4==0&&nian%100!=0) || nian%400==0)
				tian=tian+366;
			else 
				tian=tian+365;
		}while(tian%7!=0);
		   }
		   
		else
		{
		do{
			if ((nian%4==0&&nian%100!=0) || nian%400==0)
				tian=tian+366;
			else 
				tian=tian+365;
		     nian=nian+1;
		}while(tian%7!=0);
		}
		cout<<nian<<endl;
	}
}