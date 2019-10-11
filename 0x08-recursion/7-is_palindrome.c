#include "holberton.h"
/**
 * is_palindrome - Scroll string is a palindrome.
 * @s: *s.
 * Return: 1 palindrome and 0.
 */
int is_palindrome(char *s)
{

	int length;

	if (s[0] == '\0')
		return (1);
	length = _recursion(s);
	return (check_palindrome(s, length, 0, length - 1));

}

/**
 * check_palindrome - Value recursion.
 * @s: *s
 * @length: String
 * @s1: First value.
 * @s2: Second value.
 * Return: 1 palindrome and 0.
 */
int check_palindrome(char *s, int length, int s1, int s2)
{

	if (s1 >= s2)
		return (1);

	if (s[s1] != s[s2])
		return (0);

	else
		return (check_palindrome(s, length, s1 + 1, s2 - 1));

}
/**
 * _recursion - String lnt recursion.
 * @s: Value string.
 * Return: String.
 */
int _recursion(char *s)
{

	if (s[0] != '\0')

		return (1 + _recursion(s + 1));
	else
		return (0);

}
