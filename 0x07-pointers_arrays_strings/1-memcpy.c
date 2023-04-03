#include "main.h"

/**
  * _memcpy - copies memory area.
  * @dest: destination memory area
  * @src: source memory area
  * @n: number of bytes to copy from source
  * Return: dest.
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
