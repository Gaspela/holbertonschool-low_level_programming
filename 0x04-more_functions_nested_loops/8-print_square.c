#include "holberton.h"
/**
 * print_square - Function that prints a square.
 * @size: Check value user
 *
*/
void print_square(int size)
{

	int n, m;

	for (n = 1; n <= size; n++)
	{
		for (m = 1; m <= size; m++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
