#include "holberton.h"
/**
 * factorial - Factorial of a given number.
 * @n: Value n.
 * Return: Factorial.
 */
int factorial(int n)
{

	if (n < 0)

		return (-1);

	else if (n == 0)

		return (1);

	return (n * factorial(n - 1));

}
