#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

#define RANGE 20

using namespace std;

vector<int> findprimes()
{	vector<int> primes;
	for (int i = 2; i <= RANGE; i++)
	{	
		bool isPrime=true;
		for (int j = 2; j <= sqrt(i); j++)
			if(i%j==0) isPrime=false;
		if(isPrime==true) primes.push_back(i);
	}
	return primes;
}

int main()
{
	long long int smallestnum = 1;	
	vector<int> primes = findprimes();
	vector<int> primecounts(primes.size(),1);
	for (int i = 2; i <= RANGE; i++)
	{	
		int currentnum=i;
		if( find(primes.begin(),primes.end(),currentnum)!=primes.end() ) continue;
		for(int j = 0; j < primes.size(); j++)
		{	
			int count = 0;
			while (currentnum%primes[j]==0)
			{
				currentnum/=primes[j];
				count++;
			}
			if (count > primecounts[j])
				primecounts[j]=count;
		}
	}
	for(int j = 0; j < primes.size(); j++)
		smallestnum*=pow(primes[j],primecounts[j]);
	cout<< "\n" << smallestnum << "\n";	
	return 0;
}
