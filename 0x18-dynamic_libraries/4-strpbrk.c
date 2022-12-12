#include "main.h"
#include <stddef.h>

/**
*_strpbrk - Find Characters in string
*@s: searched string
*@accept: string
*Return: the first occurrence in the string s
*/
char *_strpbrk(char *s, char *accept)
{
	int b, c;

	for (b = 0; s[b] != '\0'; b++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[b] == accept[c])
			{
				return (s + b);
			}
		}
	}
	return (NULL);
}
