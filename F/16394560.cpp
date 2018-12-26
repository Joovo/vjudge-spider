#include<iostream>
#include<math.h>
 
using namespace std;
int main()
{
	int num,i,j,k;
	while(cin>>num){
		for(i=0;i<=100;i++){
			for(j=i;j<=sqrt((num-i*i)/2);j++){
				for(k=j;k<=sqrt(num-i*i-j*j);k++){
					if(i*i+j*j+k*k==num)
					goto here;
				}
			}
		}
		here:
		cout<<i<<' '<<j<<' '<<k<<endl;
	}
	return 0;
} 