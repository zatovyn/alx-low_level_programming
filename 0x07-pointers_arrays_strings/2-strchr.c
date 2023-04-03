#include "main.h"

/**
  * _strchr - locates a character in a string.
  * @s: String
  * @c: character
  * Return: pointer to c in s, or NULL if not found.
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		else
		{
			return (NULL);
		}
	}
}
