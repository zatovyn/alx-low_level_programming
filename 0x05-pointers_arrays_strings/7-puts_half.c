#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	int i = 1;

	while (str[i - 1])
	{
		i++;
	}

	i /= 2;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
