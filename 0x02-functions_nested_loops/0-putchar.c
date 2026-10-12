#include <stdio.h>
/* Author: Boluwatife Adeyemi
 * Program: WinMingle Community C Training
 * Description: This program prints putchar using only the putchar() function
 */

int main() {
	char *str = "_putchar";
	while(*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
	return(0);
}
