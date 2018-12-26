#include<iostream>
using namespace std;
int main(){
	int a,b,n,i,j,k,s;
	cin>>k;	s=0;for(j=0;j<k;j++){
	cin>>n;
	s=n%350;
	if(s>=200)
	s=s-200;
	else if(s>=150)
	s=s-150;
	cout<<s<<endl;}
	
}
