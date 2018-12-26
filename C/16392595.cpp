#include<iostream>
using namespace std;
int main()
{ int a,b[1000],c,e=0;
while(cin>>a)
{
for(int d=1;d<=a;d++)
{cin>>c;
for(int f=1;f<=c;f++)
 {cin>>b[f];
e=e+b[f];
}
cout<<e<<endl;
}
}
}
