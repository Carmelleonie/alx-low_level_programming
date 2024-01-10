#include "main.h"
/**
*is_palindrome: is aplindrome or not
*@s: The character to use
*Return: 1 if s is a palindrome and 0 if not
*/
int is_palindrome(char *s)
{
	int n = 0, m = _strlen_recursion(s);
	if (!(*s))
	{
		return (1);
	}
	return (check_palindrome(s, n, m));
}
/**
*check_palindrome - check if a string is a palindrome
*@n: the first index of the string
*@m: the index of the string
*Return: 1 if true and else 0
*/

int check_palindrome(char *s, int n, int m)
{
	if (s[n] == s[m / 2])
	{
		return (1);
	}
	if (s[n] == s[m - 1 - n])
	{
		return (check_palindrome(s, n + 1, m));
	}
	return (0);
}

/**
*_strlen_recursion - print a string length
*@s: string
*Return: nothing
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
