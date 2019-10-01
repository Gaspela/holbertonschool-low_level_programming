#include "holberton.h"
/**
 * puts_half - Should print the second half of the string.
 * @str: Check value string.
 */
void puts_half(char *str)
{
	int i, lnt;

	lnt = 0;
	for (i = 0; str[i] != '\0'; i++)
		lnt++;

		for (i = (lnt + 1) / 2; i < lnt; i++)
			_putchar(str[i]);


	_putchar('\n');
}
