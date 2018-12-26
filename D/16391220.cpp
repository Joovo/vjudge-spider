#include<iostream>
using namespace std;
int main()
{
	int i,n,j,a[100],answer[100];
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=a[i];j++)
	    {
	    	answer[j]=3*2-2;
	    	
		}
		cout<<answer[j-1]<<endl;
	}
	return 0;
}