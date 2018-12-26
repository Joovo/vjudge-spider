#include<iostream>
using namespace std;
int main()
{
	int a,b=1,c,d,sum;
    while(cin>>a)
    {
      b=1;
      c=0;
	  while(a>0)
      {
      	a=a-b;
      	b=b*2;
      	c=c+1;
      }
      if(c%2==0)
      cout<<"CiCi"<<endl;
      else
      cout<<"KiKi"<<endl;
    }
}