#include<iostream>
using namespace std;
int main(){
	int n;
	int x;
	cin>>n;
	for(int j=0;j<n;j++)
		{	int m;
		
		while(cin>>m){int sum = 0;	
			for(int i=0;i<m;i++)
			{
			cin>>x;
			sum = sum +x;
			if(i<m-1)
			cout<<sum<<endl;
			else
			cout<<sum;
			}
			
		
			}
		}
	return 0; 
} 