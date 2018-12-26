# include<iostream>
using namespace std;
int main()
{
	int n,a[100];
	while(cin>>n)
	{
	  for(int i=1;i<=2*n;i++)
	  cin>>a[i];
	  for(int j=1;j<=n;j++)
	  cout<<a[j]+a[j+1]<<endl;
    }
}