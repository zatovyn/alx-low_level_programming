#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: the length of the given string.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
