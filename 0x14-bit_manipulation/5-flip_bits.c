#include "holberton.h"
/**
 * flip_bits -  returns the number to flip to get from one number to another.
 * @n: First number.
 * @m: Second number.
 * Return: int
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	unsigned long int result;
/*Result difference n and m*/
	result = n ^ m;

	while (result)
	{
/*Move the result to rigth*/
		c += result & 1;
		result >>= 1;

	}

	return (c);

}
