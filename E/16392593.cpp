#include <iostream>
using namespace std;
int main()
{
	int n,a=1;
	while(cin>>n)
	{
	    int sum=0;
		for(int i=1;i<n;i++)
		{
		a=a*2;
		n=n-a;
		sum++;
		if(n<a*2)
		break;
		}
		if(sum%2==0)
		cout<<"Kiki"<<endl;
		else
		cout<<"Cici"<<endl;
	}
	return 0;
}