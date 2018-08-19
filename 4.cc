#include <iostream>
#include <string>
#include <math.h>

#define DIGITS 3

using namespace std;

bool isProduct(int num, int minnum, int maxnum)
{	
	for( int i = maxnum; i >= minnum; i-- )
	{
		if( num%i == 0 && num/i <= maxnum && num/i >=minnum)
		{
			return true;
		}
	}
	return false;
}

bool isPalindrome(int num, int minnum, int maxnum)
{
	string strnum = to_string(num);
	if( strnum == string(strnum.rbegin(),strnum.rend()) )
		return isProduct(num,minnum,maxnum);
	return false;
}
int main()
{	
	int minnum, maxnum, i;
	minnum = pow(10,DIGITS-1);
	maxnum = pow(10,DIGITS)-1;
	for( i = maxnum*maxnum; i >= minnum*minnum; i-- )
	{
		if(isPalindrome(i,minnum,maxnum))
			break;
	}
	//need to check if end of loop reached and number not palindrome
	cout<<i<<"\n";
	return 0;
}
