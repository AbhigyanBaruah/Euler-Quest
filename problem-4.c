/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 x 99.
Find the largest palindrome made from the product of two 3-digit numbers. 
*/

/* SOLUTION
Since we need to find the largest palindromic number made from the product of two 3-digit numbers, we start by multiplying large numbers and check if 
their product is a palindrome. We continue searching all valid products, and the largest palindrome is updated as we find larger ones.
*/


#include<stdio.h>
int main()
{
	int ans=0;
	for(int i=999; i>=100; i--){
		for(int j=i; j>=100; j--){
			int n = i*j;
			int rev=0;
			for(int num=n; num>0; num/=10){
				int d = num%10;
				rev = rev * 10 + d;
			}
			if(rev==n && n>ans)
				ans=n;
		}
	}
	printf("%d\n", ans);
	return 0;
}


