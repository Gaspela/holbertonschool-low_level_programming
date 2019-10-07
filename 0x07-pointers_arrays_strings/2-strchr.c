#include "holberton.h"
/**
 * _strchr - To locate one char c.
 * @s: Array locate string.
 * @c: Value c.
 *
 * Return: Null.
*/
char *_strchr(char *s, char c)
{
	int i;
/*Scroll for array */
	for (i = 0; s[i] != '\0'; i++)
/**/
		if (s[i] == c)
			return (&s[i]);

		if (s[i] == c)
			return (&s[i]);

	return ('\0');
}
