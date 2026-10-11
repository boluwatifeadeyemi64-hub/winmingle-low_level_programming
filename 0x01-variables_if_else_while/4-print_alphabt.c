#include <stdio.h>
/*Author: Boluwatife Adeyemi
 * program: WinMingle Community C Training
 * Description: This program prints the alphabet in lower case except letter e and q
 */

int main(){                                               char A ='a';                                      while(A <= 'z'){

	if(A != 'e' && A != 'q')
	
		putchar(A);
		A++;
	
}

putchar('\n');
return(0);

}
