#include "main.h"

/**
*_isupper - Entry point
*@c: character is uppercase
*This program checks uppercase character
*Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		putchar(c);
		return (1);
	}
	else
	{
		putchar(c);
		return (0);
	}
}
