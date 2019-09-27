#include "holberton.h"
/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: Check vaule user.
 */
void print_triangle(int size)
{
	int n, m, spaces, hashes;

	for (n = 1; n <= size; n++)
		{
		spaces = size - n;
		hashes = size - spaces;

		for (m = 1; m <= spaces; m++)
			_putchar(' ');
		for (m = 1; m <= hashes; m++)
			_putchar('#');

		_putchar('\n');
		}

		if (size <= 0)
			_putchar('\n');
}
