#include <iostream>
using namespace std;
int main()
{
int p;
while(cin>>p)
{
int result=0;
for(int i=0;i<p;i++)
{
int temp;
cin>>temp;
result+=temp;
}
cout<<result<<endl;
}
return 0;

}