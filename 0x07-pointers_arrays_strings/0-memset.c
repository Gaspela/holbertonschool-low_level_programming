#include "holberton.h"
/**
 * _memset - Fill n bytes of memory with a constant byte
 * @s: Array
 * @b: Bytes
 * @n: Bytes of memory
 * Return: s memory area
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

		for (i = 0; i < n; i++)
			s[i] = b;

	return (s);
}
