// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000. 

/* SOLUTION
There are two ways to do this. The usual way is to iterate through all the numbers from 3 to 1000, check if it is a multiple of 3 or 5, 
and if it is, add it to the sum. 
The another way is to use the formula for sum of an arithmetic series: n*(first term + last term)/2, where n is the total number of terms. 
We can calculate n by simply dividing the last term by the number we are finding multiples of. 

Series for multiples of 3: 3, 6, 9, ..., 999 
Series for multiples of 5: 5, 10, 15, ..., 995

We calculate the sum of both these series. But this leads to duplication for numbers that are multiples of both 3 and 5.
To avoid this, we subtract the sum of the multiples of 15 from the total. 
Why 15? Because it is the least common multiple of 3 and 5. 
Series for multiples of 15: 15, 30, 45, ..., 990
*/


#include<stdio.h>
int main()
{
	int a, b, c, ans=0;
	a = (999/3)*(3+999)/2;
	b = (995/5)*(5+995)/2;
	c = (990/15)*(15+990)/2;
	ans = (a+b)-c;
	printf("%d", ans);
	return 0;
}


// GENERAL WAY

// #include<stdio.h>
// int main()
// {
// 	int sum=0, i;
// 	for(i=3; i<1000; i++){
// 		if(i%3==0 || i%5==0)
// 			sum += i;
// 	}
// 	printf("%d", sum);
// 	return 0;
// }
