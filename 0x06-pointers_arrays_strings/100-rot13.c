#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: the string to encode
 *
 * Return: encode string
*/
char *rot13(char *s)
{
	int i, j;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (alpha[] != '\0')
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
