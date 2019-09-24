#include "holberton.h"
/**
 * _isalpha - Function that checks for alphabetic character.
 * @c:Check the data return.
 * Return: (1) if character is lower,uppercase and zero it is otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
