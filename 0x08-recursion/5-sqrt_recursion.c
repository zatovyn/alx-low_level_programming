#include "main.h"

/**
 * _sqrt_check - checks if n has natural square root
 * @n: number
 * @m: divisor to check
 * Return: square root of n, -1 otherwise
 */

int _sqrt_check(int n, int m)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (m * m == n)
		return (i);

	if (m * m > n)
		return (-1);

	return (sqn(n, m + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: number
 * Return: The square root of n, otherwise -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_check(n, 1));
}
