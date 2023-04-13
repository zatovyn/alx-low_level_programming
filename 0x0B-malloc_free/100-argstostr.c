#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments.
 * @ac: number of arguments.
 * @av: array of arguments.
 * Return: pointer to new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int i, j, k = 0,
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;

	len = len + (ac + 1);

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			str[k] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
