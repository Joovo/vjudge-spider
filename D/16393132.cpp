#include <iostream>
using namespace std;
int main()
{
	int j,a,N,i=1;
	int sum=3;
	cin>>N;
	for(i=1;i<=N;i++)
		{cin>>a;
		 if(a<0&&a<=30)
		 {for(j=1;j<=a;j++)
		 	sum=(sum-1)*2;}
		cout<<sum<<endl;
		}
	return 0;
}