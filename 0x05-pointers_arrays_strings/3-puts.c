#include "holberton.h"
/**
 * _puts - Return the length of a string.
 * @str: Check value string.
 * Return: lnt
 */
void _puts(char *s)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}
