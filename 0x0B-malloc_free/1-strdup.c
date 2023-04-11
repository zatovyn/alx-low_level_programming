#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a given string.
 * @str: the string to duplicate.
 * Return: the array created.
 */

char *_strdup(char *str)
{
	unsigned int i = 0, len = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_str = malloc(len + 1);

	if (new_str == NULL)
		return (NULL);

	while (i <= strlen(str))
	{
		new_str[i] = str[i];
		i++;
	}

	return (new_str);
}
