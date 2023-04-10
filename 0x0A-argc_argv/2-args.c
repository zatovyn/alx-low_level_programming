#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all arguments passed.
 * @argc: the number of arguments.
 * @argv: the array of arguments.
 * Return: always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
