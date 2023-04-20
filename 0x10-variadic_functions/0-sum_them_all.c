#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the parameters passed to it.
 * @n: Number of args.
 * Return: The sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i = 0;

	va_start(ap, n);

	for (; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
