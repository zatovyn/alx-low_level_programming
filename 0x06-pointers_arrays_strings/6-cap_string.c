#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 * Return: the captilized string
 **/

char *cap_string(char *s)
{
	int i;

	i = 0;
	if (s[i] >= 97 && s[i] <= 122)
	{
		s[i] = s[i] - 32;
	}

	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
			|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
			|| s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
			|| s[i] == '}')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] = s[i + 1] - 32;
		}
		i++;
	}
	return (s);
}
