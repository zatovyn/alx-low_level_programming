#include "main.h"
/**
  * print_most_numbers - prints the numbers, from 0 to 9
  *			except '4' and '2'.
  *
  * Return: void.
  */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
