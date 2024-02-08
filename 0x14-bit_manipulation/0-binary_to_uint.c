#include "main.h"
/**
*binary_to_uint - converts a binary number to an unsigned int.
*@b:  is pointing to a string of 0 and 1 chars
*Return: the converted number, or 0 if 
*there is one or more chars in the string b that is not 0 or 1
*b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	int number = 0, pow = 1;

	if (b)
	{
		int len = length(b) - 1;
		while (len >= 0)
		{
			if (b[len] == '1')
			{
				number += pow;
			}
			len--;
			pow += pow;
		}
	}
	return (number);
}
/**
*length - calculate the length of string stored in b
*@b:  is pointing to a string of 0 and 1 chars
*Return: return the lenght of the string
*/
int length(const char *b)
{
	int len = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		len++;
	}
	return (len);
}
