#include <stdio.h>
/* Boluwatife Adeyemi
 * winmingle community C training program
 * This program prints different combinations of two digits numbers using putchar
 */

int main(void){
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar((i / 1) + '0');
			putchar((j / 1) + '0');

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
