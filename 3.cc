#include <iostream>
#include <math.h>
#define NUM 600851475143
using namespace std;

typedef long long int lli;

bool isprime(lli num)
{
	lli cpfactor=2 , range;
	range = sqrt(num);
	for ( cpfactor = 2; cpfactor <= range; cpfactor++ )
	{
		if ( num%cpfactor == 0 )
		return false;
	}
	return true;
}

int main()
{
	lli num = NUM, cpfactor = 2, maxfactor = 1;

	for ( cpfactor = 2; cpfactor < NUM; cpfactor++ )
	{
		if ( isprime(num) )
		{
			maxfactor = num;
			break;
		}

		if ( isprime(cpfactor) )
		{
			while ( num % cpfactor == 0 )
			{
				maxfactor = cpfactor;
				num /= cpfactor;
			}
		}	

	}	
	cout << maxfactor << "\n";
	return 0;
}

