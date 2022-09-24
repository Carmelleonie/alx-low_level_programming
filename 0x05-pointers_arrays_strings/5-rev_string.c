#include "main.h"

/**
*rev_string - Entry point
*@s: string
*Return: nothing
*/
void rev_string(char *s)
{
	int count = 0, a, b;
	char *str, j;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			break;
		}
		count++;
	}
	str = s;

	for (a = 0; a < (count - 1); a++)
	{
		for (b = a + 1; b > 0; b--)
		{
			j = *(str + b);
			*(str + b) = *(str + (b - 1));
			*(str + (b - 1)) = j;
		}
	}
}
