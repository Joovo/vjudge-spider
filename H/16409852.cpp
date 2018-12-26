#include <iostream>
using namespace std;
int main()
{
   int n,i,j=0;
   while((scanf("%d",&n))!=0&&n!=0){
   int a[1000]={0};
   i=n;
   while(i)
   {
    a[j]=i%2;
    i/=2; 
    j++; 
   }
    int sum=0;
	int time =0;
    for(i=j-1;i>=0;i--){
	if(a[i]==1)time++;
	sum=sum*10+a[i];
	}
	cout<<"The parity of "<<sum<<" is "<<time<<" (mod 2)."<<endl;
	sum=0;
	time=0;
	i=0;j=0;
	}
   return 0;
}

