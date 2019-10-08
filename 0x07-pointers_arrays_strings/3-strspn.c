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
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			
		if (s[i] == accept[j])
			length++;
		if (accept[j] == '\0')
			return (length);
	}
	return (length);
}
