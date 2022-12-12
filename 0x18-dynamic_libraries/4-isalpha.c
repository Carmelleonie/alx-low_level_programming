#include "main.h"
#include <stddef.h>

/**
*_isalpha - entry
*
*@c: single letter input
*This program prints alphabets
*Return: 1 if c is letter, 0 otherwise
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
