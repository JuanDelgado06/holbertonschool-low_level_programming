#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings
 * @separator: The string to be printed between strings
 * @n: The number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *string;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(valist, char *);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");

		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(valist);
}
