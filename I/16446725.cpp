#include<iostream>
#include<cmath>
using namespace std;
int pss(int y,int m)
{
    int t;
    if((y%4==0&&y%100!=0)||y%400==0)
        t=366;
    else
        t=365;
    return t;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int y,m,d,f=0;
        char a;
        cin>>y>>a>>m>>a>>d;
        for(int s=1;;s++)
        {
            f+=pss(y,m);
            if(f%7==0)
            {
                cout<<y+s-1<<endl;
                break;
            }
        }
    }
    return 0;
}