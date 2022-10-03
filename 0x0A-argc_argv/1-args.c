#include <stdio.h>

/**
*main - print the number of argument
*@argc: number of argument
*@argv: argument vector
*Return: always 0 (success)
*/
int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
