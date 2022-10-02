#include "main.h"
/**
*is_prime - n is prime number or not
*@n: input number
*@a: interate
*Return: 1 if n is prime number otherwise 0
*/
int is_prime(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}
	if (n % a == 0)
	{
		return (0);
	}
	return (is_prime(n, a - 1));
}


/**
*is_prime_number - check if n is prime number
*@n: number checked
*Return: n
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (is_prime(n, n / 2) > 0)
	{
		return (1);
	}
	return (0);
}
