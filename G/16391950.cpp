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
y=n/350;
w=n-y*350;
if(w<150)z=w;
else if(w<200)z=w-150;
else if(w<300)z=w-200;
else z=w-300;

cout<<z<<endl;
}



}