#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n=0;
    int sum=0;
    int flag=-1;
    while(cin>>n)
    {
        for(int i=0;sum<=n;++i)
        {
            sum+=pow(2.0,i);
            flag*=(-1);

                if(flag==-1)
                {
                    cout<<"Kiki"<<endl;
                    break;
                }
                else
                {
                    cout<<"Cici"<<endl;
                    break;

                }

            }
        }
}
