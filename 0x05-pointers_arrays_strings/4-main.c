#include "main.h"

/**
*main - Entry point
*
*Description: using the main function
*This program prints a string in reverse
*Return: 0 Always (success)
*/
int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    	print_rev(str);
    	return (0);
}
