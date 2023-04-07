#include "main.h"

/**
 * wildcmp - compares the strings s1 and s2
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		else
			return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (0);
		else if (*(s2 + 1) == '\0')
			return (1);
		else
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	return (0);
}
