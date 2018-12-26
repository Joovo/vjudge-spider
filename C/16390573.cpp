#include<iostream>
using namespace std;
int main()
{
	int p,q,n,sum;
	
	while(cin>>n)
	{
		int i,j;
		for(i=0;i<n;i++){
			cin>>p;
			for(j=0;j<p;j++){
				cin>>q;
				sum+=q;
			}
			cout<<sum<<endl;
			sum=0;
		}
	}
	return 0;
}