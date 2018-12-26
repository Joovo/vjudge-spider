#include <iostream>
#include <cstdio>
using namespace std;
int main ()
{
	int cnt;
	cin>>cnt;
	int i,j,k,l ;
	int max=70;
	int min=0;
	int money;
	for (i=1;i<=cnt;i++){
		cin>>money;
		for (j=max;j>=1;j--){
			if(money-j*150>=0&&money-j*150<min)min=money-j*150;
			for (k=1;k<=max;k++){
					if(money-j*150-k*200>=0&&money-j*150-k*200<min)min=money-j*150-k*200;
						for (l=1;l<=max;l++){
							if(money-j*150-k*200-l*350>=0&&money-j*150-k*200-l*350<min)min=money-j*150-k*200-l*350;
						}
			}

			}
			cout<<min<<endl;
		}
		
		

	return 0;
}