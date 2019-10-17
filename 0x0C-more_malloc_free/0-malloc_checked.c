#include <stdio.h>
#include "holberton.h"
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Amount memory the array.
 * Return: Allocate pointer in memory.
*/
void *malloc_checked(unsigned int b)
{

	void *p;

	p = malloc(b);
	if (p == NULL)
	exit(98);
	return (p);

}
