#include <stdio.h>

/**
*main - Entry point
*
*Description: using the main function
*This function prints the size of various types of computer
*
*Return: 0 Always (success)
*/
int main(void)
{
	char c;
	int a;
	long int b;
	long long int x;
	float f;

	printf("Size of a char: %d\n", c);
	printf("Size of an int: %d\n", a);
	printf("Size of a long int: %d\n", b);
	printf("Size of a long long int: %d\n", x);
	printf("Size of a float: %d\n", f);
	return (0);
}
