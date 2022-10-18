#include "variadic_functions.h"
#include <stdarg.h>

/**
*print_strings - prints strings
*@separator: between strings
*@n: number of arguments
*Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list k;
	char *str;

	va_start(k, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(k, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(k);
}
