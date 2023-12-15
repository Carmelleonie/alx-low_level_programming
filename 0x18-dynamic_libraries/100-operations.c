#include <stdio.h>
#include "main.h"
/**
*add - add a and b
*@a: the first value
*@b: the second value
*Return: return the sum of a and b
*/
int add(int a, int b)
{
	return (a + b);
}

/**
*sub - substract b from a
*@a: the first value
*@b: the second value
*Return: return a-b
*/
int sub(int a, int b)
{
	return (a - b);
}

/**
*mul - multiply a and b
*@a: the first value
*@b: the second value
*Return: return a * b
*/
int mul(int a, int b)
{
	return (a * b);
}

/**
*div - divide a by b
*@a: the first value
*@b: the second value
*Return: return a / b if b != 0
*/
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
}

/**
*mod - return the rest of division of a by b
*@a: the first value
*@b: the second value
*Return: return a / b
*/
int mod(int a, int b)
{
	return (a % b);
}

