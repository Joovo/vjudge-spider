#include<iostream>
#include<cmath>
using namespace std;
int pss(int y)
{
    int t;
    if((y%4==0&&y%100!=0)||y%400==0)
        t=2;
    else
        t=1;
    return t;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int y,m,d,f=0,s;
        char a;
        cin>>y>>a>>m>>a>>d;
        for(s=0;;s++)
        {
            if(pss(y+s)==1&&pss(y+s+1)==2)
            {
                if((m==2&&d==29)||m>2)
                    f+=2;
                else
                    f++;
            }
            if(pss(y+s)==2&&pss(y+s+1)==1)
            {
                if(m==2&&d==29)
                    f++;
                else if(m>2)
                    f++;
                else
                    f+=2;
            }
            if(pss(y+s)==1&&pss(y+s+1)==1)
                f++;
            if(m==2&&d==29)
            {
                if(pss(y+s)==2&&f%7==0)
                    break;
            }
            else if(f%7==0)
                break;
        }
        cout<<y+s+1<<endl;
    }
    return 0;
}