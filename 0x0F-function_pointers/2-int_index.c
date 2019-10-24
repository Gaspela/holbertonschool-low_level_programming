#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Search for an integer.
 * @array: Array.
 * @size: Size.
 * @cmp: Pointer compare de value.
 * Return: Return the first element.
*/
int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (cmp == NULL || array == NULL)
		return (-1);
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if ((*cmp)(array[i]))
			return (i);

	return (-1);

}
