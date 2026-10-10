#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Author: Boluwatife Adeyemi
 * Program: WinMingle Community C Training
 * Description: This program prints the last digit of a random number
 */

int main(){
	int n;
	int last;
	srand(time(0));
	n = rand();
	last = n % 10;

	if(last > 5){
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}

	else if(last != 0 && last < 6) { 
		printf("Last digit of %d is %d and is less than 6 but not equal to 0\n", n, last);
	}
	return(0);
}

