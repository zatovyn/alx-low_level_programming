#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Multiplies two numbers
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);
}
