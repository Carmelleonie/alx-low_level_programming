#include "main.h"
/**
*is_prime - n is prime number or not
*@n: input number
*@a: interate
*Return: 1 if n is prime number otherwise 0
*/
int is_prime(unsigned int n, unsigned int a)
{
	if (n % a == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0 + is_prime(n, a + 1));
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
	return (is_prime(n, 2));
}
