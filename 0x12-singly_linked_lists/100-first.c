#include <stdio.h>

void print_lines(void) __attribute__((constructor));

/**
 * print_lines - prints before the main function is executed
 */
void print_lines(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
