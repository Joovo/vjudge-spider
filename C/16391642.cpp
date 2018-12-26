#include <iostream>
using namespace std;
int main() {
    int a,n,i,j,m,s;
    cin>>m;
    for(i=0;i<m;m++){
      s=0;cin>>n;
    for(j=0;j<n;j++) {
     cin>>a;s+=a;}
   if(i<m-1  ) cout<<s<<endl;
  else cout<<s;
    return 0;}
}