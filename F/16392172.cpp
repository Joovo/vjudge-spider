#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int n;
bool qq=0;

while(cin>>n)
{
for(int x=1;x<sqrt(n)&&qq!=1;x++) 
{
	for(int y=x;y<sqrt(n)&&qq!=1+1;y++) 
	{
		for(int z=y;z<sqrt(n)&&qq!=1;z++)
		 {
			if(n==(x*x+y*y+z*z))
{cout<<x<<""<<y<<" "<<z<<endl;qq=1;}
		}
	}
}
}
}