#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int a;
	int b;
	int n;
	int m;
	int j;
	cin>>n;
	int i;
	for (i=1;i<=n;i++)
	{
		cin>>m;
		for(j=1;j<=m;j++){
		
		cin>>a;
		b+=a;
		}
		
		printf("%d\n\n",b);
	}
	
	return 0;
} 