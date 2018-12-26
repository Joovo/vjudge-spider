#include<iostream>
using namespace std;
int main(){
	int n;
	int m;
	while (cin>>n)
	{
		cin>>m;
		int x;
		int sum =0;
		for(int i=0;i<m;i++)
		{
		cin>>x;
		sum =sum+x;
		}
		cout<<sum<<endl;
	}
}