#include<iostream>
#include<cmath>
using namespace std;
int sum(int t){
	int a[100]={0};
	int i=0;
	int count=0;
	while(t){
		a[i]=t%2;
		if(a[i]=1){
			count++;
		}
		i++;
		t/=2;
	}
	return count;
}
int main(){
	int n;
	int count=0;
	while(cin>>n){
		count=sum(n);
		if(count%2!=0){
			cout<<"KiKi"<<endl;
		}else{
			cout<<"Cici"<<endl;
		}
		
	}
}