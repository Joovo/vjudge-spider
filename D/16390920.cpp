#include <iostream>

using namespace std;

int main()
{
	int n,a=0;
	int sum=3;
	
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>a;
		for(int j=0;j<a;++j)
		{
			sum=(sum-1)*2;
		}
		cout<<sum<<endl;
		sum=0;		
	}	
	
}