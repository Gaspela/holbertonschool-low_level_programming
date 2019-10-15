#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - Create array of chars and init char c with chrc.
 * @size: Size array
 * @c: Value init.
 * Return: *P array.
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *p;

	if (size == 0)
	return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	return (NULL);
		for (i = 0; i < size; i++)
			p[i] = c;
		return (p);

}

