#include "holberton.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Array string print.
 */
void _print_rev_recursion(char *s)
{

	if (s[0] != '\0')
	{
		s++;
			_print_rev_recursion(s);
				_putchar(s[-1]);
	}

}
