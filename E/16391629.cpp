#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n=0;
	int a;
	while(cin>>a)
	{
		while(pow(2,n)<=a)
		n++;
	cout<<((n%2)?"Kiki":"Cici")<<endl;
	}
	
	return 0;
}