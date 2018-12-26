#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 for(int i=1;1;i++){
  if(3*i*i>n) break;
  for(int j=i;1;j++){
   if(i*i+2*j*j>n) break;
   for(int k=j;1;k++){
    if(i*i+j*j+k*k==n){
     cout<<i<<" "<<j<<" "<<k<<endl;
     return 0;
    }
    else if(i*i+j*j+k*k>n) break;
   }
  }
 }
 return 0;
}