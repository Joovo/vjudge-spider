#include<iostream>
#include<cstring> 
using namespace std;
int main() { 
	 int n,x,i,ans;
    while (cin>>n) {
	ans=0;
	while (n>0) {
	ans+=n%2;
	n=n/2; 
	 }
	 if (ans%2==1) cout<<"Kiki"<<endl;
	 else cout<<"Cici"<<endl; 
	 } 
	 return 0;
} 