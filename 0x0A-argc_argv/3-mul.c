#include <stdio.h>
#include <stdlib.h>

/**
*main - print the result of two numbers
*@argc: count argument
*@argv: argument vector
*Return: always 0 (success)
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i, j, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;

	printf("%d\n", mul);
	return (0);
}
