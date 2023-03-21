#include "main.h"
/**
  * main - Entry point
  * Description: prints the alphabet, in lowercase, followed by a new line.
  * Return: void
  */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
