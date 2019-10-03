#include "holberton.h"
/**
 * _strncpy - Funtion string.
 * @dest: destiny value.
 * @src: String value.
 * @n: Number bytes
 * Return: dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, src_length, end;

	src_length = 0;
	for (i = 0; src[i] != '\0'; i++)
		src_length++;

	if (n > src_length)
		end = src_length;
	else
		end = n;
/*****************************************/
	for (i = 0; i < end; i++)
		dest[i] = src[i];

	if (n > src_length)
	{
		for (i = src_length; i < n; i++)
			dest[i] = '\0';
	}

	return (dest);
}
