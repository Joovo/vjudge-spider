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
            if(pss(y+s,m)==366&&m==2&&d==29)
            {
                f+=pss(y+s,m);
                if(f%7==0&&pss(y+s,m)==366)
                {
                    cout<<y+s<<endl;
                    break;
                }
            }
            else
            {
                f+=pss(y+s,m);
                if(f%7==0)
                {
                    cout<<y+s<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}