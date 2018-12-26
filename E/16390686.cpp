#include <iostream>
#include<cmath>
using namespace std;
int main() {
	int n,i,j,s,m,k,a;
	cin>>n;
	k=1;
	s=0;
	for(i=1;i<=n;i++)
	{
		s=s+pow(2,i-1);
		k=k*-1;
		if(s>=n)break;
	}
	if(k==-1) cout<<"KiKi";
	else cout<<"Cici";
}