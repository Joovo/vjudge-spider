#include<iostream>
using namespace std;
int main(){
	int n,m; 
	char c;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		int sum=0;
		while (cin>>m){
			sum+=m;
			c=getchar();
			if(c=='\n'){
				break;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}