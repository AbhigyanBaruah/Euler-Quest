/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143?
*/

/* SOLUTION
The solution to this problem is very straight forward. We just divide the given number by a prime factor (starting with the smallest prime) as long as it 
is divisible. Once it is no longer divisible, we move to the next number. This process continues until the number is completely factorized, 
and the largest factor remaining is the largest prime factor of n. 
*/


#include<stdio.h>
int main()
{
	long int n=600851475143, pf=2;
	while(n!=1){
		if(n%pf==0)
			n/=pf;
		else
			++pf;
	}
	printf("%ld\n", pf);
	return 0; 
}