#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,i=0;
	while(cin>>n)
	{
 	 if(n>=1&&n<=1000)
	 { while(n>0)
	  { n=n-pow(2,i);
	    i++;	
	  }
	 if(i%2!=0) cout<<"Kiki"<<endl;
	 if(i%2==0) cout<<"Cici"<<endl;
	 }
	i=0;
    }
	return 0;
}