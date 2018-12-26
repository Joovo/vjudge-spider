#include <iostream>
using namespace std;
int main(){
  int n,a,b=0,c,q=1;
  cin>>n;
 
  for (int x=0;x<n;x++){
   cin>>a;
  for (int i=0;i<a;i++)
  {cin>>c;
  
   b=b+c;}
   if (q<a){
   q=q+1;
   cout<<b<<endl<<endl;
   b=0;}
   else 
   {cout<<b;
   }
}

}