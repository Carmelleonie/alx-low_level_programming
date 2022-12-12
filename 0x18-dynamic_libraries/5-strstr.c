#include "main.h"
#include <stddef.h>

/**
*_strstr - entry point
*@haystack: string
*@needle: searched string
*Return: a pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	for (haystack = 0; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
