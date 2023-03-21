#include "main.h"
/**
  * _isalpha - checks if input is a letter.
  * @c: The character in ASCII code.
  * Return: 1 if c is letter, 0 otherwise.
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
