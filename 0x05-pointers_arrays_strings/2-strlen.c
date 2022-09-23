#include "main.h"

/**
*_strlen - length of string
*@s: returns length of string
*Return: the length of a string
*/
int _strlen(char *s)
{
	int len = 0;
	int n = 1;
	char i = s[0];

	while (i != '\0')
	{
		len++;
		i = s[n++];
	}
	return (len);
}
