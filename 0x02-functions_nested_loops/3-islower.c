#include "holberton.h"
/**
 * _islower - Function that checks for lowercase character.
 * @c: Check of data.
 * Return: (1) if c is lowercase, and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
