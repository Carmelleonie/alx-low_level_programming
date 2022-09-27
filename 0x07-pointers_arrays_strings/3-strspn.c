#include "main.h"

/**
*_strspn - gets the length of string
*@s: string
*@accept: string to be used
*Return: the number of bytes in the initial segment of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int match = 0;

	while (s[a] !='\0')
	{
		if (_strchr(accept, s[a] == NULL)
		{
			break;
		match++
