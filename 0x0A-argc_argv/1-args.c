#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the number of arguments.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
