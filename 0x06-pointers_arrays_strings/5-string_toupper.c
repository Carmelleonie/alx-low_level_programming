#include "main.h"

/**
*string_toupper - Entry point
*@n: input string
*Return: string
*/
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\n'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
	}
	return (n);
}
