#include "main.h"
#include <stdlib.h>

/**
*_strdup - duplicate
*@str: string duplicated
*Return: nothing
*/
char *_strdup(char *str)
{
	unsigned int pin, i;
	char *nstr;

	if (str == NULL)
	{
		return (NULL);
	}
	pin = 0;
	while (str[pin] != '\0')
	{
		pin++;
	}

	nstr = malloc(sizeof(char) * (pin + 1));

	if (nstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < pin; i++)
	{
		nstr[i] = str[i];
	}
	return (nstr);
}
