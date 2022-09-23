#include "main.h"

/**
*rev_string - Entry point
*@s: string
*Return: nothing
*/
void rev_string(char *s)
{
	int i, a, len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		a = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = a;
	}
}
