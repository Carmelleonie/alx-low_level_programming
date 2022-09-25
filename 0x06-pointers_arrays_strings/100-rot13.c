#include "main.h"

/**
*rot13 - function that encoded a string using rot13
*@str: string to be encoded
*Return: address of the encoded code
*/

char *rot13(char *str)
{
	int i = 0;
	int j = 0;
	char *l = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *r13 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	while (*(str + i) != '\0')
	{
		while (*(l + j) != '\0')
		{
			if (*(str + i) == *(l + j))
			{
				*(str + i) = *(r13 + j);
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
