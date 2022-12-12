#include "main.h"
#include <stddef.h>

/**
*_strncpy- function that copyies a string
*@dest: copy to
*@src: copy from
*@n: input number of char
*Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
