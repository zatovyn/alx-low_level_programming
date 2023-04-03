#include "main.h"

/**
  * _strchr - locates a character in a string.
  * @s: String
  * @c: character
  * Return: pointer to c in s, or NULL if not found.
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}
