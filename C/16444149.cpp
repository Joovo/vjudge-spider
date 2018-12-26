#include<iostream>
#include<cmath>
#include<cstdio>
#include<iomanip>
#include<cstring>
using namespace std;
int main(){
int n,c,a;
cin>>n;
for(int i=1;i<=n;i++){
	int m;
	cin>>m;
	int sum=0;
	for(int j=1;j<=m;j++){
		cin>>a;
		a+=a;
	}
	cout<<a<<endl<<endl;
}
return 0;
}