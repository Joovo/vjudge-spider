#include<iostream>
using namespace std;
int main()
{
	int N,a,i,j;
	cin>>N>>a>>j;
	if(j<=N){
	for(i=1;i<=N;i++)
	{
		a=(a-1)*2;
		cout<<a<<endl;
	}
	}
	else cout<<a<<endl;
	return 0;
}