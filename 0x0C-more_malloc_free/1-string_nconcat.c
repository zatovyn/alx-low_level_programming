#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings up to n bytes of s2.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes to get from s2.
 * Return: pointer to the concatenated string, OR NULL if failed.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0, allsize, i;
	char *copy;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	if (size2 < n)
		n = size2;

	allsize = size1 + n;

	copy = malloc(allsize + 1);

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < allsize; i++)
	{
		if (i < size1)
			copy[i] = s1[i];
		else
			copy[i] = s2[i - size1];
	}

	copy[i] = '\0';

	return (copy);
}
