#include "holberton.h"
/**
 * _isdigit - Function that checks for a digit (0 through 9).
 * @c: Check value return.
 * Return: 1 if character is a number, 0 else.
*/
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
