#include<iostream>
using namespace std;
int main(){
	int n,m; 
	int first=1;
	char c;
	cin>>n;
	for(int i=0;i<n;i++){
		int sum=0;
		while (cin>>m){
			sum+=m;
			c=getchar();
			if(c=='\n'){
				break;
			}
		}
		if(first) first=0;
		else cout<<endl<<endl;
		cout<<sum;
		
	}
	return 0;
}