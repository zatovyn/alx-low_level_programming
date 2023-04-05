#include "main.h"

/**
 * _pow_recursion - calculates x raised to the power of y.
 * @x: the base
 * @y: the power
 * Return: if y > 0 x to the power of y,otherwise -1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
