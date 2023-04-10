#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the program name.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: always 0 (Success).
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
