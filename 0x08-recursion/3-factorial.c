#include "main.h"

/**
  * factorial - returns the factorial of a given number.
  * @n: the given number
  * Return: factorial of n, otherwise -1.
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
