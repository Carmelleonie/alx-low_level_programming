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

	printf("Size of a char: %d byte(s)\n", c);
	printf("Size of an int: %d byte(s)\n", a);
	printf("Size of a long int: %d byte(s)\n", b);
	printf("Size of a long long int: %d byte(s)\n", x);
	printf("Size of a float: %d byte(s)\n", f);
	return (0);
}
