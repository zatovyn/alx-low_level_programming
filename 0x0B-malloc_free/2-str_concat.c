#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string.
 * @s1: first string.
 * @s2: second string.
 * Return: the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i = 0, j = 0, len_s1 = 0, len_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;

	new_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (new_str == NULL)
		return (NULL);

	for (; i < len_s1; i++)
		new_str[i] = s1[i];
	for (; j < len_s2; j++, i++)
		new_str[i] = s2[j];

	new_str[i] = '\0';

	return (new_str);
}
