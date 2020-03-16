#include "holberton.h"
/**
 * binary_to_uint - Transform binary to unsigned int.
 * @b: Values.
 * Return: Binary to unsigned int.
*/
unsigned int binary_to_uint(const char *b)
{

	unsigned int i, str = 0, uint = 0;

	if (b == NULL)
		return (0);
/*Check the num 0 and 1, account size*/
		while (b[str])
			{
		if (b[str] != '0' && b[str] != '1')
			return (0);

			str++;

			}
/*Reorder str str--;*/
		str--;
	for (i = 0; b[i]; i++)
		{
		if (b[i] == '1')
			uint += 1 << str;
		str--;
		}



	return (uint);

}
