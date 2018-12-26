# include <iostream>
# include <cstdio>
# include <cmath>
# include <cstring>
# include <string>
using namespace std;
int main()
{
	int t,a[101];
	int i;
	cin>>t;
	for(i=1; i<=t; ++i)
	{
		cin>>a[i];
	}
	for(i=1; i<=t; ++i)
	{
		a[i]=a[i]%350;
		a[i]=a[i]%200;
		a[i]=a[i]%150;
	} 
	for(i=1; i<=t; ++i)
		cout<<a[i]<<endl; 
	
	
	return 0;
}