#include<iostream>
using namespace std;

int main()
{int a,b,c,d;
 cin>>d;
 for(;d>=1;d--)
   {for(cin>>c>>a;c>=1;c--)
       {cin>>b;
        a=a+b;
       }
    cout<<a<<endl;
   }
  return 0;
}