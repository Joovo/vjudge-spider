#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 int a=150,b=200,c=350;
 for(int i=1;i<=t;i++){
  int n;
  cin>>n;
  if(n<150) cout<<n<<endl;
  else{
  cout<<n%50<<endl;
  }
 }
 return 0;
}