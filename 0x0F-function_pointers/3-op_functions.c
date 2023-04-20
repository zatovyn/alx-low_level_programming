#include "3-calc.h"

/**
 * op_add - the sum of a and b.
 * @a: first integer.
 * @b: second integer.
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctracts two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: the result of a / b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the modulo of two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: remainder of the division.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
