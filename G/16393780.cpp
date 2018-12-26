#include <iostream>
using namespace std;
int main ()
{
    int n,s=0,i=1,m;
    cin>>n;
    while(i<=n)
    {
        
        cin>>m;
        s=m%350;
        if(s<150)
        cout<<s<<endl;
        else if(s<200)
        cout<<s-150<<endl;
        else if(s<300)
        cout<<s-200<<endl;
        else
        cout<<s-300<<endl;
        i=i+1;
        s=0;
        }
}