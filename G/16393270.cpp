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
else if(w<350)z=w-300;
else if(w<400)z=w-350;
else if(w<450)z=w-400;
else if(w<500) z=w-450;
else if(w<550)z=w-500;
else if(w<600)z=w-550;
else if(w<650)z=w-600;
else if(w<700)z=w-650;

cout<<z<<endl;
}



}