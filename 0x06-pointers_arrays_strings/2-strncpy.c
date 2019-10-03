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
	int i, src_lnt, end;

	src_lnt = 0;
	for (i = 0; src[i] != '\0'; i++)
		src_lnt++;

	if (n > src_lnt)
		end = src_lnt;
	else
		end = n;
/*****************************************/
	for (i = 0; i < end; i++)
		dest[i] = src[i];

	if (n > src_lnt)
	{
		for (i = src_lnt; i < n; i++)
			dest[i] = '\0';
	}

	return (dest);
}
