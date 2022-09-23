#include "main.h"

/**
*main -Entry point
*
*Description: using the main function
*Return: 0 Always (success)
*/
int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n",s);
	return (0);
}
