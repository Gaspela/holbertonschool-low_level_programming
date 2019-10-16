#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - Function string.
 * @s: Value string check.
 * Return: String.
 */
int _strlen(char *s)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

		return (i);

}
/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: Number of arguments.
 * @av: Arguments
 * Return: cc
 */
char *argstostr(int ac, char **av)
{

	int i, j;
	int position = 0, len = 0;
	char *cc;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);

	cc = malloc(sizeof(char) * (len + ac + 1));
	if (cc == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			cc[position++] = av[i][j];
		cc[position++] = '\n';
	}
	cc[position] = '\0';

	return (cc);

}
