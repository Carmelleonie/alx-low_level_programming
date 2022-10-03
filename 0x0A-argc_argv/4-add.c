#include <stdio.h>
#include <stdlib.h>

/**
*main - prit sum of number
*@argc: cont argument
*@argv: argument vector
*Return: always 0 (success)
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
