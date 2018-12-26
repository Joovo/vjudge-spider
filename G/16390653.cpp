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
y=n/350;
w=n-y*350;
if(w<150)z=w;
else if(w<200)z=w-150;
else z=w-200;
cout<<z<<endl;
}



}