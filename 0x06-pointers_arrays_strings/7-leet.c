#include "main.h"
/**
 * leet - encodes a string
 * @s: the string to encode
 *
 * Return: the encode string
*/
char *leet(char *s)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	int n[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (s[i] == c[j])
			{
				s[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
