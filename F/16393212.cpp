#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
  {
     using namespace std;
     int f[1005]={0};
	 int i,n,j,k,num;
	 
	 while(cin>>num)
	 {n=0;
	    for(i=0;i<100;i++)
	    {
	    	for(j=0;j<100;j++)
	    	{
	    		for(k=0;k<100;k++)
	    		{
	    			if(i*i+j*j+k*k==num)
	    			{n=1;
	    			cout<<i<<" "<<j<<" "<<k<<endl;
	    		    break;
	    			}
	    		}
	    	if(n) break;
	    	}
	    if(n) break;	
	    }
	 }
	 return 0;
  }