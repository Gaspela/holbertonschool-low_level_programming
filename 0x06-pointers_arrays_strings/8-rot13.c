#include "holberton.h"
/**
 * rot13 - Function that capitalizes all words of a string.
 * @s: Cheack value s
 * Return: s.
*/
char *rot13(char *s)
{
	int i, n;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

/*String*/
	for (i = 0; s[i] != '\0'; i++)
		{
/*Position characters*/
		for (n = 0; a[n] != '\0'; n++)
			{
/*Comparate array s with arry a*/
			if (s[i] == a[n])
				{
/*Change array s(a[n]) for array b*/
				s[i] = b[n];
				break;
				}
			}
		}

		return (s);
}
