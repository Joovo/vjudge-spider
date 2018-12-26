#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int t;
 cin>>t;
 for(int i=1;i<=t;i++){
  int n;
  cin>>n;
  int a=150,b=200,c=350;
  if(n%a==0 || n%b==0 || n%c==0){
   cout<<0<<endl;
   break;
  }
  n%=4200;
  int sum=n;
  for(int j=n/c;j>=0;j--){
   int x=n-j*c;
   for(int k=x/b;k>=0;k--){
    int y=(x-k*b)/a;
    y=x-y*a;
    if(y<sum) sum=y;
   }
  }
  cout<<sum<<endl;
 }
 return 0;
}