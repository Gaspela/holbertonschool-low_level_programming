#include <stdio.h>
#include "holberton.h"
/**
 * print_array - Print n elements of an array of integers
 * @a: Check array value
 * @n: Check value element.
 */
void print_array(int *a, int n)
{
	int i;

		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i < n - 1)
				printf(", ");
		}


	printf("\n");
}
