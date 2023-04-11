#include <stdio.h>
#include <stdlib.h>

/**
 * check_number - checks if string contains numbers.
 * @c: the string.
 * Return: returns 1 if string contains numbers only, 0 otherwise.
 **/

int check_number(char *c)
{
	while (*c)
	{
		if (*c >= '0' && *c <= '9')
			c++;
		else
			return (1);
	}
	return (0);
}

/**
 * main - Entry point
 * Description: adds positive numbers.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	while (i < argc)
	{
		if (check_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}

	i = 1;
	while (i < argc)
	{
		sum += atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
