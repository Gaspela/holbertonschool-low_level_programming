#include "holberton.h"
/*
 * _memcpy - Function that copies memory area.
 * @dest: Destiny array copy.
 * @src: Source copy.
 * @n: Values numbers copy memory
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)

		dest[i] = src[i];

	return (dest);

}


