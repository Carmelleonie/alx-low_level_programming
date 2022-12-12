#include "main.h"
#include <stddef.h>

/**
*_islower - entry
*
*@c: single letter input
*This program prints alphabet in lowercase
*Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
