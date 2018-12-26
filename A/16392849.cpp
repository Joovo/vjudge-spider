#include <iostream>
using namespace std;
int main()
{
	int a=2,i,j=0,b[20];
	for(i=1;i<=a;i++)
	cin>>b[i];
	for(i=1;i<=a;i++)
		j=j+b[i];
	cout<<j<<endl;
return 0;
}