#include "holberton.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String find value.
 * @accept: Bytes to search.
 *
 * Return: 0.
*/
char *_strpbrk(char *s, char *accept)
{

	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
		{
		for (j = 0; accept[j] != '\0'; j++)
			{
			if (s[i] == accept[j])
					return (&s[i]);
			}
		}

	return (0);
}
