#include<iostream>
#include<cmath> 
using namespace std;
int main(){
	int num;
	while(cin>>num){
	int x=1,y=1,z=1;
	int mmm=pow(x,2)+pow(y,2)+pow(z,2);
	if(mmm<num){
		z=z+1;
		mmm=pow(x,2)+pow(y,2)+pow(z,2);
		if(mmm<num){
		y=y+1;
		mmm=pow(x,2)+pow(y,2)+pow(z,2);
		}	
		if(mmm<num){
		x=x+1;
		mmm=pow(x,2)+pow(y,2)+pow(z,2);
		}		
	}
	cout<<x<<" "<<y<<" "<<z<<endl;
	}
}