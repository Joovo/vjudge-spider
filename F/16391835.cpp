#include<iostream>
#include<iomanip>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
 {
 	int x,y,z,sum;
 	cin>>sum;
 	for(x=1;x<=sqrt(sum/3);x++)
 	{
 		for(y=1;y<=sqrt((sum-x*x)/2);y++)
 		{
 			for(z=1;z<=sum-x*x-y*y;z++)
 			{
 				if(x*x+y*y+z*z==sum)
 				{
 					cout<<x<<" "<<y<<" "<<z<<endl;
 					goto here;
				 }
			 }
		 }
	 }
	 here:
	 return 0;
 }