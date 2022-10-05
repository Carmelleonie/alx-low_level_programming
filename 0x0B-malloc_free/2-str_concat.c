#include "main.h"
#include <stdlib.h>
/**
*str_concat - concatenate strings s1 and s2
*@s1: first string
*@s2: second string
*Return: nothing
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int len1, len2, n, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	n = len1 + len2;
	s = malloc((n * sizeof(char)) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len1)
	{
		s[i] = s1[i];
	}
	j = 0;
	while (i <= n)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	return (s);
}
