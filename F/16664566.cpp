#include<iostream>
using namespace std;
int main()
{int x,y,z,sum;
int m=0;
while(cin>>sum)
{for(x=1;x<=100;x++)
{ for(y=1;y<=100;y++)
	 {for(z=1;z<=100;z++)
		 {if(x*x+y*y+z*z==sum)
                 m=m+1 ;
          if(m!=0)
		 break;
		 }
	 if(m!=0)
		 break;}
 if(m!=0)
	 break;}

 cout<<x<<y<<z<<endl;
	 
			 
}
return 0;
}