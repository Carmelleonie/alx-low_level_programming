#include "main.h"

/**
*_strspn - gets the length of string
*@s: string
*@accept: string to be used
*Return: the number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c, d;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		d = 0;

		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				c++;
				d = 1;
			}
		}
		if (d == 0)
		{
			return (c);
		}
	}
	return (c);
}
