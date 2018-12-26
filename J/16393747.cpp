#include <iostream>
#include <string> 
using namespace std;

int main()
{
	int p[6];
	while(cin>>p[0]>>p[1]>>p[2]>>p[3]>>p[4]>>p[5])
	{
		int i=0;
		if(p[1]==p[2]==p[3]==p[0]==p[4]==p[5]==0) break;
		if(p[5]>0) i=i+p[5];
		int sum=p[0]+p[1]+p[2]+p[3]+p[4];
		if(sum%36==0) i=i+sum/36;
		else i=i+1+sum/36;
		cout<<i<<endl;
	}
	return 0;
}