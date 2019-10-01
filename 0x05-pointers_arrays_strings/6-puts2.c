#include "holberton.h"
/**
 * puts2 - Prints character of a string mod 2.
 * @str: Check value string.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		{
			if (i % 2 == 0)
				_putchar(str[i]);
		}
		_putchar('\n');
}
