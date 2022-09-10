#include <stdio.h>

/**
*main - Entry point
*
*Description: using the main function
*
*this program prints num
*Return: 0 (success)
*/

int main(void)
{
	int n = 0;

	printf("Please enter number: ");
	scanf("%d", &n);

	if (n > 0)
		printf("%d is greather than zero\n", n);

	else if (n < 0)
		printf("%d is less than zero\n", n);

	else if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
