#include "main.h"
#include <stdio.h>

/**
*
*Return: 0 Always (success)
*/
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
