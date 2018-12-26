
#include<iostream> 

using namespace std;

int main()
{
	int n, m, a, sum;
	int i, j;
	
	cin >> n;
	
	for(i=0;i<n; i++)
	{
		cin>>m;
		for(j = 0; j<m;j++)
		{
			cin>>a;
			sum+=a;
		}
		cout<<sum<<endl;
		if(i<n-1)
			
			cout<<endl;
		
	}
	return 0;
}
