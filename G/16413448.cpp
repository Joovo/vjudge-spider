#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t;
	int n;
	int mix1,mix2,mix3;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		mix1=n%150;
		mix2=n%200;
		mix3=n%350;
		if(mix1==0 ||mix2==0||mix3==0){
			cout<<"0"<<endl;
		}
		else{
			if(mix2!=0){
				if(!(mix2=mix2%150)){
					cout<<"0"<<endl;
				}
			}
			if(mix3!=0){
				mix3=mix3%200;
				if(!(mix3)){
					cout<<"0"<<endl;
				}
				else{
					if(!(mix3=mix3%150)){
						cout<<"0"<<endl;
					}
				}
			}
		}
		if(mix1!=0 && mix2 !=0 && mix3!=0){
			if(mix1>mix2){
				mix1=mix2;
			}
			if(mix1>mix3){
				mix1=mix3;
			}
			cout<<mix1<<endl;
		}
	}
	return 0;
	
}