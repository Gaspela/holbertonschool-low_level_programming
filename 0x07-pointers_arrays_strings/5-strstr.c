#include "holberton.h"
/**
 * _strstr -  Locates a substring..
 * @haystack: String find value.
 * @needle: Substring to locate.
 *
 * Return: 0.
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j; 
	int lnt;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (lnt = i, j = 0; needle[j] != '\0'; lnt++, j++)
		{
			if (needle[j] != haystack[lnt] || haystack[lnt] == '\0')
					break;
		}
		if (needle[j] == '\0')

			return (haystack + i);
	}
	return ('\0');
}
