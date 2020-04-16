#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array.
 * @array: Where array is a pointer to the first element of the array.
 * @size: Number of elements in array.
 * @value: The value to search.
 * Return: NUll or -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t down = 0;
	size_t hight = size - 1;
	size_t mid;
	size_t i;

	if (!array || !size)
		return (-1);

	while (down <= hight)
	{
		i = down;
		mid = (down + hight) / 2;

		printf("Searching in array: ");
		while (i <= hight)
		{
			if (array[i] != array[hight])
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
			i++;
		}

		if (array[mid] < value)
			down = mid + 1;
		else if (array[mid] > value)
			hight = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
