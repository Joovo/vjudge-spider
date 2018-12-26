#include <iostream>
using namespace std;
int main(){
	int n,i,s,a;
	while(cin>>n){
	
	s=1;
	i=0;
	while(s<=n){
		s=s*2;
		i++;
	}
	a=i%2;
	if(a==1)
	cout<<"Kiki\n";
	else
	cout<<"Cici\n";
	}
 
}