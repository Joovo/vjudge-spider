#include<iostream>
using namespace std;
int main()
{
	int t,n,i,left;
	int a[7]={50,100,0,0,50,100,0};
	while(cin>>t){
		for(i=0;i<t;i++){
			cin>>n;
		int num=n/50;
		left=n-num*50;
		num=num%7-1;
		if(num==-1)num=6;
		left+=a[num];
		cout<<left<<endl;
		}
		
	}
	return 0;
}