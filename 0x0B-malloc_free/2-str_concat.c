#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - Function string.
 * @s: Value string check.
 * Return: String.
 */
int _strlen(char *s)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

		return (i);

}
/**
 * str_concat - concatane two strings.
 * @s1: My first string.
 * @s2: My second string.
 * Return: Only both strings.
 */
char *str_concat(char *s1, char *s2)
{

	int i, len1, len2;
	char *cc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

		len1 = _strlen(s1);
		len2 = _strlen(s2);

	cc = malloc(sizeof(char) * (len1 + len2 + 1));
	if (cc == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		cc[i] = s1[i];
	for (; i < len1 + len2; i++)
		cc[i] = s2[i - len1];
	cc[len1 + len2] = '\0';

	return (cc);

}
