#include <iostream>
using namespace std;
int main()
{
  int i,n,j,m,a,b;
  cin>>n;
  for(i=0;i<n;i++)
  {
  cin>>m;
  b=0;
	  for(j=0;j<m;j++)
	  {
		  cin>>a;
		  b=b+a;
		  cout<<b<<"\n";
		  if(i!=n-1) cout<<"\n";
	  }
  }
}