#include "main.h"

/**
*cap_string - function that capitalize first character of word
*@str: string to capitalize
*Return: returns the capitalized string
*/
char *cap_string(char *str)
{
	int i, j;
	int x = 32;
	int separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - x;
		}
		x = 0;

		for (j = 0; j <= 12; j++)
		{
			if (str[i] == separators[j])
			{
				j = 12;
				x = 32;
			}
		}
	}
	return (str);
}
