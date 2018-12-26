#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int num;
	cin>>num;
	for(int i=0;pow(i,2)<=num;i++)
		for(int j=0;pow(i,2)+pow(j,2)<=num;j++)
			for(int k=0;pow(i,2)+pow(j,2)+pow(k,2)<=num;k++)
				if(pow(i,2)+pow(j,2)+pow(k,2)==num) 
				{
					cout<<i<<" "<<j<<" "<<k<<endl;
				}
	return 0;
}