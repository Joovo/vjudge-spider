#include<iostream>
using namespace std;
int main()
{int a,n=0;
while(cin>>a)
   {while((a!=0)&&(a!=1))
    {
    n++;
    a%=2;
    }
    if(a==1)
    n++;
    if(n%2==1) cout<<"Kiki"<<endl;
    else cout<<"Cici"<<endl;
    n=0;
   }
}