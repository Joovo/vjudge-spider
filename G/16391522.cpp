#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 int a=150,b=200,c=350;
 for(int i=1;i<=t;i++){
  int n;
  cin>>n;
  if(n%a==0 || n%b==0 || n%c==0){
   cout<<0<<endl;
   break;
  }
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