#include <stdio.h>
/**
 * main - Entry point
 * Description: using a 'for' loop to iterate over each character of the string
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < sizeof(str); i++)
	{
		putchar (str[i]);
	}
	putchar ('\n');
	return (0);
}
