#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i = 0, bytes;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;
	for (; i < bytes; i++)
	{
		printf("%02hhx", ar[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
