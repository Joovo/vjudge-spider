#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int z;
        cin>>a;
        z=a;
        for(int y=0;350*y<=a;y++)
        {
            for(int m=0;200*m<=a;m++)
            {
                for(int x=0;150*x<a;x++)
                {
                    if(350*y+200*m+150*x>a&&z>a-350*y-200*m-150*(x-1)&&a-350*y-200*m-150*(x-1)>=0)
                        z=a-350*y-200*m-150*(x-1);
                }
            }
        }
        cout<<z<<endl;
    }
    return 0;
}