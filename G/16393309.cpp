#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int q,n,y,w,z;
cin>>q;
for(int i=1;i<=q;i++)
{
   cin>>n;
   w=0;
y=n/700;
w=n-y*700;
if(w<150)z=w;
else if(w<200)z=w-150;
else if(w<300)z=w-200;
else z=50;

cout<<z<<endl;
}



}