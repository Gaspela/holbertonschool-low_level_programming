#include <stdlib.h>
/**
 * array_range - Create an array of integers.
 * @min: Value min.
 * @max: Value max.
 * Return: P
 */
int *array_range(int min, int max)
{
	int *p;
	int i, len;

	if (min > max)
		return (NULL);

		len = max - min + 1;
		p = malloc(sizeof(int) * len);
		if (p == NULL)
			return (NULL);

		for (i = 0; i < len; i++)
			{
			p[i] = min;
			min++;
			}

	return (p);

}
