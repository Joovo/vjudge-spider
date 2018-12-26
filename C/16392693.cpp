#include <iostream>
using namespace std;
int main()
{
	int total;
	int i,j,sum,a,n;
	cin>>total;
	for(i=0;i<total;i++)
		{sum=0;
		 cin>>n;
		 for(j=0;j<n;j++)
			{cin>>a;
			 sum=sum+a;}
		cout<<endl;
		if(i!=total-1)
		cout<<endl;
		}
	return 0;
}