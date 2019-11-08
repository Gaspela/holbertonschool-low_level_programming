#include "holberton.h"
/**
 * get_bit - Funtion the value of a bit at a given index.
 * @n: Integer value.
 * @index: Index.
 * Return: Value index.
*/
int get_bit(unsigned long int n, unsigned int index)
{
/*Max bits 32*/
	if (index > 32)
		return (-1);
/*Condition*/
	if (n == 0)
		return (0);
/*Bits specified index*/
	return (1 & (n >> index));

}
