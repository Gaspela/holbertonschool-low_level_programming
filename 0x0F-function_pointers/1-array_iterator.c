#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Parameter on each element of an array.
 * @array: Array.
 * @size: Size of the array.
 * @action: The funtion execute.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
