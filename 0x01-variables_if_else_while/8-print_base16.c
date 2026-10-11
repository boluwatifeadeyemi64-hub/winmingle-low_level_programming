#include <stdio.h>
/* Author: Boluwatife Adeyemi
 * Program: WinMingle Community C Training
 * Description: This program prints all the numbers of base 16 in lowercase
 */

int main(){
        char n = '0';
        while( n <= 'f'){
                putchar(n);
                n++;
        }
        putchar('\n');
        return 0;
}
