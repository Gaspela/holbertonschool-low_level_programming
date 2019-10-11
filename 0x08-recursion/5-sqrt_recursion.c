#include "holberton.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number.
 * Return: Mitad.
 */
int _sqrt_recursion(int n)
{

	return (ssqrt(0, n));

}
/**
 * ssqrt - Search square a number.
 * @n: Value number n.
 * @i: Value number i.
 * Return: -1.
 */
int ssqrt(int i, int n)
{

	if (i * i == n)

		return (i);
	else if (i < n)
		{
		return (ssqrt(i + 1, n));
		}
	else
		return (-1);

}
