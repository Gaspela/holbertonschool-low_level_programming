#include "holberton.h"
/**
 * leet - Function that capitalizes all words of a string.
 * @s: Cheack value s
 * Return: s.
*/
char *leet(char *s)
{
	int i, j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";
/**/
	for (i = 0; s[i] != '\0'; i++)
		{
		for (j = 0; j < 10; j++)
			{
/*Comparate array s and s1*/
			if (s[i] == s1[j])
				{
/*Change value array s for data s2*/
				s[i] = s2[j];
			}
		}
	}

	return (s);
}
