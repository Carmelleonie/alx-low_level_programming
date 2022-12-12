#include "main.h"
#include <stddef.h>

/**
*_memset - Entry point
*@n: Number of bytes to be filled starting
*@b: Value to be filled
*@s: Starting adress of memory to be filled
*Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
