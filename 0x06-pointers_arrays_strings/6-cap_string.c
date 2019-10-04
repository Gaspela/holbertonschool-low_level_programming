#include "holberton.h"
/**
 * cap_string - Function that capitalizes all words of a string.
 * @s: Cheack value s
 * Return: s.
*/
char *cap_string(char *s)
{
	int i;

	i = 0;
/*String*/
		if (s[0] >= 'a' && s[0] <= 'z')
			{
			s[0] = s[0] - 32;
				}
/*For switch select case*/
			for (i = 0; s[i] != '\0'; i++)
				{
				switch (s[i])
				{
				case ',':
				case ';':
				case '.':
				case '!':
				case '?':
				case '"':
				case '(':
				case ')':
				case '{':
				case '}':
				case ' ':
				case '\n':
				case '\t':
					if (s[i + 1] > 96 && s[i + 1] < 123)
					{
					s[i + 1] = s[i + 1] - 32;
					}
		}
	}
	return (s);
}
