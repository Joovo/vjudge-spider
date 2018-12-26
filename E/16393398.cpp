#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int num;
	while(cin>>num)
	{
		int n=0;
		while(pow(2,n)-1<num) n++;
		cout<<((n%2)?"Kiki":"Cici")<<endl;
	}
	return 0;
}