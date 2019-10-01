#include "holberon.h"
/**
 * _strlen - Return the length of a string.
 * @str: Check value string.
 * Return: lnt
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar("\n");
}
