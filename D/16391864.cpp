#include<iostream>
using namespace std;
int main()
{int a,b,c,d;
 a=3;
 cin>>b;
 c=(a-1)*2;
 for(int x=b;x>=1;x--)
   {
    cin>>d;
    for(int y=d;y>=2;y--)
       c=(c-1)*2;
    cout<<c<<endl;
   } 
 return 0;
}