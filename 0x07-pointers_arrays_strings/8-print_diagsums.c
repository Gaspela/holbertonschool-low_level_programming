#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals.
 * @a: Array diag.
 * @size: Array tamano.
 */

void print_diagsums(int *a, int size)
{

	int i, j, k;

	j = k = 0;

		for (i = 0; i < size; i++)
		{
			j += a[i * (size + 1)];
				k += a[(i + 1) * (size - 1)];
		}

	printf("%d, %d\n", j, k);

}
