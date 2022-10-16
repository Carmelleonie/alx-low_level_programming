#include "variadic_functions.h"
#include <stdarg.h>

/**
*print_numbers - prints numbers
*@separator: to seprate numbers
*@n: numbers of arguments
*Return: Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				if (separator != NULL)
				{
					printf("%d%s", va_arg(ap, int), separator);
				}
				else
				{
					printf("%d", va_arg(ap, int));
				}
			}
			else
			{
				printf("%d", va_arg(ap, int));
			}
		}
	}
	printf("\n");
	va_end(ap);
}
