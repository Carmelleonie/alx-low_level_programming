#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
*string_nconcat - append s2 at the end of s1
*@s1: first string
*@s2: string to be appended
*@n: size of memory to be allocated
*Return: Nothing
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, j = 0, m = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= len2)
	{
		m = len1 + len2;
	}
	else
	{
		m = len1 + n;
	}
		s = malloc((sizeof(char) * m) + 1);
		if (!s)
		{
			return (NULL);
		}
		j = 0;
		while (len2 <= m)
		{
			if (len2 <= len1)
			{
				s[len2] = s1[len2];
			}
			if (len2 > len1)
			{
				s[len2] = s2[j];
				j++;
			}
			len2++;
		}
		s[len2] = '\0';
		return (s);
}
