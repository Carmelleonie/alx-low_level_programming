#include "main.h"

/**
*_sqrt_recursion - Entry point
*@n: number's squared
*Return: number
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_check(1, n));
}
/**
*sqrt_check - prints the number's squart
*@i: squared number
*@n: test number
*Return: number's squart
*/
int sqrt_check(int n, int i)
{
	if (n * n == i)
	{
		return (n);
	}
	if (n * n > i)
	{
		return (-1);
	}
	return (sqrt_check(n + 1, i));
}
