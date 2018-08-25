#include <stdio.h>
#include <math.h>

#define N 100
#define SUMN ((N*(N+1))/2)
#define SUMN2 ((N*(N+1)*(2*N+1))/6)

int main()
{	
	long int ans = pow(SUMN,2)-SUMN2;
	printf("\n%ld\n",ans);
	return 0;
}
