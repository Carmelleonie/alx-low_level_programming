#include "main.h"

/**
*main - Entry point
*
*Description: using the main function
*This program prints letters in uppercase
*Return: 0 Always (success)
*/
int main(void)
{
	
    char i;

	i = 'A';
	printf("%c: %d\n", i, _isupper(i));
	i = 'a';
	printf("%c: %d\n", i, _isupper(i));

    return (0);
}
