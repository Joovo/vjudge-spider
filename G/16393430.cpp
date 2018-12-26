#include <iostream>
using namespace std;
int main()
{	int x,a,b,c;
	cin>>x;
	a=x%150;
	b=x%200;
	c=x%350;
	if(a<=b)
		x=a;
	else x=b;
	if(x<=c)
cout<<x;
	else
		cout<<c;

return 0;
}