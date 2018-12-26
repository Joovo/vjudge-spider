#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int num;
	cin>>num;
	int a[3];
	for(int i=0;pow(i,2)<=num;i++)
		for(int j=0;pow(i,2)+pow(j,2)<=num;j++)
			for(int k=0;pow(i,2)+pow(j,2)+pow(k,2)<=num;k++)
				if(pow(i,2)+pow(j,2)+pow(k,2)==num) 
				{
					a[0]=i;a[1]=j;a[2]=k;
					break;
				}
	sort(a,a+3);
	for(int i=0;i<3;i++)
		cout<<((i)?" ":"")<<a[i];
	cout<<endl;
	return 0;
}