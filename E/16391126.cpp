#include<iostream>
#include<string>
using namespace std;
int main()
{
string b;
int c,sum=0;
cin>>b;
c=b.length();
for(int i=0;i<=c-1;i++)
{
sum=sum+b[i]-48;
}
if(sum%3==0) cout<<"Cici"<<endl;
else cout<<"Kiki"<<endl;
}