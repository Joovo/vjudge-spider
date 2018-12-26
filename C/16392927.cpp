#include <iostream>
using namespace std;
int main()
{int n,m,i,l,a,c;
 cin>>n;
	  for(i=0;i<n;i++)
	  {cin>>m;
	   c=0;
	   for(l=0;l<m;l++)
	   {cin>>a;
		c=c+a;
	   }	 
	   if(l==m)cout<<c<<"\n";
       cout<<"\n";
	  }
	  if(i=n)cout<<"\b";
}
