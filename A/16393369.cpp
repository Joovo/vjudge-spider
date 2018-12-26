#include <iostream>
using namespace std;

int main()
{
	double ballsPurchased, unitCost, totalCost;
	cin  >> ballsPurchased;
        cin  >> unitCost;

	totalCost = ballsPurchased + unitCost;

	cout  << totalCost << endl;
	return 0;
}