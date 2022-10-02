#include "main.h"

/**
*_sqrt_recursion - Entry point
*@n: number's squared
*Return: number
*/
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
	{
		return (n);
	}
	return (_sqrt_recursion(0, n));
}
/**
*_sqrt - prints the number's squart
*@i: squared number
*@n: test number
*Return: number's squart
*/
int _sqrt(int n, int i)
{
	if (n > i / 2)
	{
		return (-1);
	}
	else if (n * n == i)
	{
		return (n);
	}
	return (_sqrt(n + 1, i));
}
