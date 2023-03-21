#include "main.h"
/**
  * print_alphabet_x10 - prints 10 times the alphabet.
  * Return: void
  */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; j < 11; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
