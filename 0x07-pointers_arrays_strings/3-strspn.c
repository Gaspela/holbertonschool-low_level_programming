#include "holberton"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String find value.
 * @accept: Bytes to search.
 *
 * Return: desc
*/
unsigned int _strspn(char *s, char *accept)
{

	int i;
	int j;
	int lnt = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				lnt++;
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}

		return (lnt);
}
