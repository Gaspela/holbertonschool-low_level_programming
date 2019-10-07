#include "holberton.h"
/*
 * _memcpy - Copy memori area.
 * @n: Value numbers copy memory.
 * @dest: Destiny array copy.
 * @src: Source copy.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		
		dest[i] = src[i];
		

	return (dest);

}


