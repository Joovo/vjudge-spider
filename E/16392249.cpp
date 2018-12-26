#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,i=0;
	cin>>n;
	while(n>0)
	{
		n=n-pow(2,i);
		i++;
	}
	if(i%2!=0) cout<<"Kiki";
	if(i%2==0) cout<<"Cici";
	return 0;
}