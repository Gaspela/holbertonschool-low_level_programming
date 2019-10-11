#include "holberton.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number.
 * Return: Mitad.
 */
int _sqrt_recursion(int n)
{

	return (sqrt(0, n));

}
/**
 * sqrt - Search square a number.
 * @n: Value number.
 * @i: Value number.
 * Return: -1.
 */
int sqrt(int i, int n)
{

	if (i * i == n)

		return (i);
	else if (i < n)
		{
		return (sqrt(i + 1, n));
		}
	else
		return (-1);

}
