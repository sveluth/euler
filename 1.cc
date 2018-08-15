#include <iostream>
#define RANGE 1000

using namespace std;

double summultiple(int n)
{
	double result = 0;
	double maxfactor= ( RANGE - 1 ) / n;
	result = ( maxfactor * (maxfactor + 1) * n ) / 2;
	return result;
}
int main()
{
	double sum = 0;
	sum= summultiple(3) + summultiple(5) - summultiple(15);
	cout << "ANSWER : "<< sum << "\n";
}
