#include<iostream>
using namespace std;
int main()
{
	int n,a,b,t;
    cin>>n;
    char sum[n];
    for(int i=1;i<=n;i++)
    {   t=0;
    	cin>>a;
    	for(int r=1;r<=a;r++)
    	{
    		cin>>b;
    		t=t+b;
    		
    	}
    	
    }
    cout<<sum[n];	
}