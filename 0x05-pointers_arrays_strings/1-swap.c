#include "holberton.h"
/**
 * swap_int - Swap the value of two integers.
 * @a: Check value a.
 * @b: Check value b.
 */
void swap_int(int *a, int *b)
{
		int tmp;

		tmp = *b;
		*b = *a;
		*a = tmp;
}
