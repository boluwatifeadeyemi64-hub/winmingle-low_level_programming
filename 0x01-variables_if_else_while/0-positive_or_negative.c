#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Author: Boluwatife Adeyemi
 * Program: WinMingle Community C Training
 * Code Description: This code uses the if_else statement to print the output of a random number generation*/

int main(){
	int n;
	srand(time(0));
	n = rand() - (RAND_MAX/2);
	if(n>0)
	{
		printf("number is %d and it is positive\n", n);
	}
	else if (n<0)
	{
		printf("number is %d  and it is negative\n", n);
	}
	else
	{
		printf("number is zero\n");
	}
	return(0);
}
