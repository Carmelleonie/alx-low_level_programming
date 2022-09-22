#include <stdio.h>

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

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0)
		{
			putchar("Fizz");
		}

		else if (num % 5 == 0)
		{
			putchar("Buzz");
		}

		else if (num % 15 == 0)
		{
			putchar("FizzBuzz");
		}

		else
		{
			putchar(num);
		}
	putchar(' ');
	}
	return (0);
}
