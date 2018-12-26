#include<iostream>
using namespace std;
int main(){
	int n;
	int x;
	cin>>n;
	int sum = 0;
	for(int j=0;j<n;j++)
		{	int m;
		cin>>m;
		for(int k=0;k<m;k++)
		{	
			for(int i=0;i<m;i++)
			{
			cin>>x;
			sum = sum +x;
			}
			
			if(k<=m-1)
			cout<<sum<<endl;
			else
			cout<<sum;
		
			}
		}
	return 0; 
} 