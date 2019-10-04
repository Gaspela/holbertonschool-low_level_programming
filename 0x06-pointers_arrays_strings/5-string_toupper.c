#include "holberton.h"
/**
 * string_toupper - Function that changes all lowercase a Upperc.
 * @s: Change the string s.1
 * Return: s.
*/
char *string_toupper(char *s)
{
	int i;
/*  */
	for (i = 0; s[i] != '\0'; i++)
		{
		if (s[i] >= 'a' && s[i] <= 'z')
/*Ascii*/
			s[i] -= 32;
		}


	return (s);
}
