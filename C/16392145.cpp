#include <iostream>
using namespace std;
int main()
{
  int i,n;
  cin>>n;
  for(i=1;i<=n;i++)
  {
  for(int a;cin>>a;)
	  cout<<(a+1)*a/2<<"\n";
  }
}