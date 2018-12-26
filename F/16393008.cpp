#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,m;
int x,y,z;
cin>>n;
for(x=0;x<=sqrt(n);x++){y=0;
for(y=0;y<=sqrt(n-x*x);y++){z=0;
for(z=0;z<=sqrt(n-x*x-y*y);z++)	
cout<<x<<y<<z;
}
}
}