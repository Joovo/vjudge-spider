#include<iostream>
#include<math.h>
#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n,i,j,k;
	while(cin>>n){
		for(i=0;i<=100;i++){
			for(j=0;j<=100;j++){
				for(k=0;k<=100;k++){
					if(i*i+j*j+k*k==n)
					goto here;
				}
			}
		}
		here:
		cout<<i<<' '<<j<<' '<<k<<endl;
	}
	return 0;
} 