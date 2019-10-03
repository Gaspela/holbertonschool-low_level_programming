#include "holberton"
/**
 * _strcat - Funtion string.
 * @dest: destiny value.
 * @src: String value.
 * Return: String.
*/
char *_strcat(char *dest, char *src)
{
	int i, src_lnt, dest_lnt;

	src_lnt = 0;
	dest_lnt = 0;
	/* Print src */
	for (i = 0; src[i] != '\0'; i++)
		src_lnt++;
		/* Print dest */
		for (i = 0; dest[i] != '\0'; i++)
			dest_lnt++;
			/* Print dest src */
			for (i = 0; i <= src_lnt; i++)
				dest[dest_lnt + i] = src[i];

	return (dest);
}


