#include "holberton.h"
/**
 * _isupper - Function that checks for uppercase character.
 * @c: Check value return.
 * Return: 1 if character == Uppercase and 0 else.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
