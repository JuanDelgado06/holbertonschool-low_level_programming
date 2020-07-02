#include "holberton.h"

/**
 * _memcpy - Copy n bytes from memory area src to memory area dest
 * @dest: The destination to copy to
 * @src: The source to copy from
 * @n: The number of bytes to copy
 *
 * Return: Pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char **p;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	p = &dest;

	return (*p);
}
