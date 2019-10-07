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
/*Scroll the arrangement and find char c*/
	for (i = 0; s[i] != '\0' && s[i] != c; i++)
/*Find and compare char c*/
		if (s[i] != c)
			return ('\0');
				else 	
				return (&s[i]);

}
