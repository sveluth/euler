#include <iostream>
#include <math.h>
#define RANGE 10001

using namespace std;

bool isPrime( int num )
{
	for (int j = 2; j <= sqrt(num); j++)
		if(num%j==0) return false;
	return true;
}

int main()
{
	long int num = 3;
	int counter = 1;
	while (counter < RANGE)
	{
		if( num%2!=0 && isPrime(num)==true ) counter++;
		num++;
	}
	cout << "\n" << --num << "\n";
	return 0;
}
