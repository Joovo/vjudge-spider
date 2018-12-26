#include <iostream>
using namespace std;
int main()
{	int x[100],y[100],a,b,c,n,i,z;
	cin>>n;
	for(i=1;i<=n;i++)
	{cin>>x[i];
	a=x[i]%150;
	b=x[i]%200;
	c=x[i]%350;
	if(a<=b)
		z=a;
	else z=b;
	if(z>=c)
		z=c;
	y[i]=z;
	}
for(i=1;i<=n;i++)
cout<<y[i]<<endl;
return 0;
}