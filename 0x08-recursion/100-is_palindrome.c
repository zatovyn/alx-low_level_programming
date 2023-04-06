#include "main.h"

/**
 * str_len - measures the length of the string
 * @s: the string
 * Return: the length of s
 */

int str_len(char *s)
{
	if (*s != '\0')
	{
		return (1 + str_len(s + 1));
	}
	return (0);

}

/**
 * palindrome_or_not - checks if string is palindrome
 * @s: the string
 * @i: index starting from the beginning of s
 * @j: index starting from the end
 * Return: returns 1 if s is palindrome, 0 otherwise.
 */

int palindrome_or_not(char *s, int i, int j)
{
	if (s[i] != s[j])
		return (0);
	else if (i == j)
		return (1);
	else if (i == j - 1)
		return (1);
	return (check_if_palindrome(s, i + 1, j - 1));
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: the string
 * Return: 1 if s is palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int i = str_len(s) - 1;

	if (i == 0 || i == 1)
		return (1);
	return (palindrome_or_not(s, 0, i));
}
