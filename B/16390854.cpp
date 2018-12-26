#include<iostream>
using namespace std;
int main()
{
  int n,a,b;
int  sum=0;
  int ch[100000];
  cin>>n;
  for(int i=0;i<n;i++)
{
    cin>>ch[i];
}
  for(int j=0;j<n;j++)
 {
   sum=sum+ch[j];

}
  cout<<sum<<endl;
}
