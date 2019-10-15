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
 * _strdup - Duplicate string.
 * @str: String to duplicate.
 * Return: *p Duplicate.
 */
char *_strdup(char *str)
{

	int i;
	int length;
	char *pd;

	if (str == NULL)
		return (NULL);

	length = _strlen(str);

	pd = malloc(sizeof(char) * length + 1);
	if (pd == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		pd[i] = str[i];
	pd[length] = str[length];

	return (pd);

}
