#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,x,y,z,g;
    while(cin>>n)
    {
        g=0;
        for(x=1;x<=sqrt(n);x++)
        {
            for(y=x;y<=sqrt(n);y++)
            {
                for(z=y;z<=sqrt(n);z++)
                {
                    if(x*x+y*y+z*z==n)
                    {
                        cout<<x<<" "<<y<<" "<<z<<endl;
                        g=1;
                        break;
                    }
                    if(g==1)
                        break;
                }
            }
            if(g==1)
                break;
        }
    }
    return 0;
}