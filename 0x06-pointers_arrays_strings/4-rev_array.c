#include "holberton.h"
/**
 * _reverse_array - Funtion string.
 * @a: Array reverse
 * @n: Elements
*/
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n;
	for (i = 0; i < j; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		j--;
	}
}
