#include <iostream>
using namespace std;
int main()
{
  int n,sum1,sum2,x=10,y=10;
  cin >> n;
  while (x>0)
  {
    sum1=2^x;
    while (y>0)	
	{sum2=2^y;
	y=y-1;}
	if (n==sum1+sum2){cout <<"CiCi" <<endl;
	break;}
    else { cout << "KiKi" << endl; break;}
  x=x-1;
  }return 0;
}