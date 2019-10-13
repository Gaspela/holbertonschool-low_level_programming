#include "holberton.h"
/**
 * _puts - Return the length of a string.
 * @str: Check value string.
 * Return: lnt
 */
void _puts(char *s)
{
	int i;

0	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}
