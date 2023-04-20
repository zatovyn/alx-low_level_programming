#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints string, followed by a new line.
 * @separator: the seperator string.
 * @n: number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str = NULL;

	va_start(ap, n);

	for (; i < n; i++)
	{
		str = va_arg(ap, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
