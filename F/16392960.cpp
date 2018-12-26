#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,m;
int x,y,z;
cin>>n;
for(x=0;x<=sqrt(n);x++){
for(y=0;y<=sqrt(n-x*x);y++){
for(z=0;z<=sqrt(n-x*x-y*y);z++)	
cout<<x<<y<<z;
}
}
}