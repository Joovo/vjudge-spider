#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c,n;
	cin>>n;
	for(a=1;a<=100;a++){
		for(b=1;b<=100;b++){
			for(c=1;c<=100;c++){
				if((pow(a,2)+pow(b,2)+pow(c,2))==n){
					break;
				}
				
			}if((pow(a,2)+pow(b,2)+pow(c,2))==n){
					break;
				}
		}
		if((pow(a,2)+pow(b,2)+pow(c,2))==n){
					break;
				}
	}
	cout<<a<<" "<<b<<" "<<c;
	return 0;
}