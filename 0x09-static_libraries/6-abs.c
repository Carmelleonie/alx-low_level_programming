#include "main.h"

/**
*_abs - Entry point
*
*@n: absolute value of an integer
*This program prints the absolute value of an integer
*Return: absolute value of n
*/
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
