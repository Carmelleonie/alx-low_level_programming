#include "main.h"

/**
*_memcpy - copy memory
*@dest: destination
*@src: source
*@n: numbersof bytes
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
