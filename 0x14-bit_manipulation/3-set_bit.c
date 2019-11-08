#include "holberton.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Unsigned int
 * @index: unsigned int
 * Return: int
*/
int set_bit(unsigned long int *n, unsigned int index)
{
/*n max index*/
	if (index > 32)
		return (-1);
/*n <- 1*/
	*n += 1 << index;

	return (1);

}
