#include <iostream>
using namespace std;


int main()
{
	int n;
	cin>>n;
	long i=0,m,a,s,j;
	while(i<n)
	{
		i++;
		cin>>m;
		for(j=0;j<m;j++){
			cin>>a;
			s+=a;
		}
		cout<<s<<endl<<endl;
	}
	return 0;
}
