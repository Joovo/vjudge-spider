#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m; 
		if(m>350)m=m%350;
		if(m>300&&m<200)m=m%150;
		else m=m%200;
		cout<<m<<endl;
	}
} 