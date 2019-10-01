#include "holberton.h"
/**
 * print_rev - Print a string in reverse.
 * @s: Check value string.
 */
void print_rev(char *s)
{
	int i, lnt;

	lnt = 0;
	for (i = 0; s[i] != '\0'; i++)
		lnt++;

		for (i = lnt - 1; i >= 0; i--)
			_putchar(s[i]);

	_putchar('\n');
}
