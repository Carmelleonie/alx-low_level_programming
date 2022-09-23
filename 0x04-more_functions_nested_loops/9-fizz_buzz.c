#include "main.h"

/**
*main - Entry point
*
*Description: using the main function
*This pgrogram prints numbers
*Return: 0 Always (success)
*/
int main(void)
{
	int num;

	num = 0;
	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((num % 3) == 0 && (num % 5) != 0)
		{
			printf("Fizz");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", num);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
