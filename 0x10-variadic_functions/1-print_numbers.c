#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers.
 * @separator: the seperator string between numbers.
 * @n: the numbers of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
