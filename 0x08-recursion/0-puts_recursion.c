#include "holberton.h"
/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: Array string print.
 */
void _puts_recursion(char *s)
{
/*Scroll the array s*/
	if (s[0] != '\0')
	{
		_putchar(s[0]);
			s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
