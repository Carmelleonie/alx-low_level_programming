#include "main.h"

/**
*leet -Entry point
*@str: string to be encoded
*Return: addressof the encoded strin
*/
char *leet(char *str)
{
	int i = 0, j = 0;
	char *l = "aAeEoOlLtT";
	char *n = "4433001177";

	while (*(str + i) != '\0')
	{
		while (*(l + j) != '\0')
		{
			if (*(str + i) == *(l + j))
			{
				*(str + i) = *(n + j);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
