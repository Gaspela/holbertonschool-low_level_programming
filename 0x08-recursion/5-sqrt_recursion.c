#include "holberton.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number.
 * Return: Mitad.
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
		else if (n == 0)
			return (n);

	return (sqrt(n, 1));

}
/**
 * sqrt - Search square a number.
 * @n: Value number.
 * @i: Value number.
 * Return: -1.
 */
int sqrt(int n, int i)
{

		if (i * i > n)
			return (-1);
		if (i * i == n)
			return (i);
		else
			return (sqrt(n, i + 1));

}
