#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: String
 * @c: character
 * Return: a pointer to c in s or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return ('\0');
	}
}
