#include <stdio.h>

/**
*main- Entry point
*
*Description: using the main function
*this program prints the alphabet in lowercase
*
*Return : Always 0 (success)
*/
int main(void)
{
/*this specifies there are no arguments taken by main*/

	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	putchar('\n');

	return (0);
}
