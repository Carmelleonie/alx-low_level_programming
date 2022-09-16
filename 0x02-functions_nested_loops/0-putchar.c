#include "main.h"

/**
*main - Entry point
*@ch:parameter to be print
*Description: Put char
*This program prints _putchar
*Return:  Always void
*/
int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
		{
			_putchar(s[i]);
			i++;
		}
		_putchar(10);

		return (0);
}
