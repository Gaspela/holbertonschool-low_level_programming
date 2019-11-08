#include "holberton.h"
/**
 * clear_bit - set the value of a bit at a given index
 * @n: Unsigned int
 * @index: unsigned int
 * Return: int
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
/*n max index*/
	if (index > 32)
		return (-1);
/*Denial of 1*/
		*n &= ~(1 << index);
	return (1);

}
