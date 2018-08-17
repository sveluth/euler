#include <stdio.h>
#define RANGE 4000000

typedef unsigned long int ulint;
int main()
{	
	ulint sum = 0;
	long int a = 1, b = 1, c = a+b;
	while( c<RANGE )
	{	
		sum+=c;
		a=b+c;
		b=c+a;
		c=a+b;
	}
	printf("\n%lu\n",sum);
	return 0;
}
