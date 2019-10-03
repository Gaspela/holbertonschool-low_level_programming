#include "holberton.h"
/**
 * _strncat - Funtion string.
 * @dest: Destiny value.
 * @src: String value.
 * @n: Number bytes.
 * Return: dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, src_lnt, dest_lnt;
/* src 12 */
	src_lnt = 0;
	for (i = 0; src[i] != '\0'; i++)
		src_lnt++;
/* dest 1 */
	dest_lnt = 0;
	for (i = 0; dest[i] != '\0'; i++)
		dest_lnt++;
/* Number bytes n */
	if (n > src_lnt)
		n = src_lnt;

	for (i = 0; i < n; i++)
		dest[dest_lnt + i] = src[i];
		dest[dest_lnt + i] = '\0';

	return (dest);
}
