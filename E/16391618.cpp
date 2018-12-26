#include<iostream>
using namespace std;
int main()
{
	int n,i;
	while(cin>>n){
		int j=1;
		for(i=1;;i*=2){
			n-=i;
			if(n<=0){
				if(j%2==1)	cout<<"Kiki"<<endl;
				else cout<<"Cici"<<endl;
				break;
			}
			j++;
		}
	}
	return 0;
}