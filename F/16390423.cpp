#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int n;

cin>>n;
for(int x=1;x<sqrt(n);x++) 
{
	for(int y=1;y<sqrt(n);y++) 
	{
		for(int z=1;z<sqrt(n);z++)
		 {
			if(n==(x*x+y*y+z*z))cout<<x<<" "<<y<<" "<<z<<endl;
		}
	}
}

}