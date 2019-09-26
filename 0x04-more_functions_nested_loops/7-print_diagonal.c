#include "holberton.h"
/**
 * print_diagonal - Function that draws a diagonal line on the terminal.
 * @n: Check value user.
*/
void print_diagonal(int n)
{

	int i;
	int m;

	for (i = 1; i <= 0; i++)
		{
			for (m = 1; m < i; m++)
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
 		}
		if(n <= 0)
		{
		_putchar('\n');
		}
}
