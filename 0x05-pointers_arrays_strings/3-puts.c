#include "holberon.h"
/**
 * _strlen - Return the length of a string.
 * @s: Check value string.
 * Return: lnt
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return ("\n");
}
