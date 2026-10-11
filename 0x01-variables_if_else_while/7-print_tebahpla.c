#include <stdio.h>
/* Author: Boluwatife Adeyemi
 * Program: WinMingle Community C Training
 * Description: This program prints the alphabet in reverse order
 */

int main(){
        char A = 'z';
        while( A >= 'a'){
                putchar(A);
                A--;
        }
        putchar('\n');
        return 0;
}
