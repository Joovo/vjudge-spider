#include<iostream>
using namespace std;
int main()
{
	int group,line,num,sum;
	
	cin>>group;
	
		int i,j;
		for(i=0;i<group;i++){
			cin>>line;
			for(j=0;j<line;j++){
				cin>>num;
				sum+=num;
			}
			cout<<sum<<endl<<endl;
			sum=0;
		}
	
	return 0;
}