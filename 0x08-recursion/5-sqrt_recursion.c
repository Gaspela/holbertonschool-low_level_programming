#include "holberton.h"
/**
  * _sqrt_recursion - Call the function that calculates the sqrt
  * @n: Value
  * Return: Value
  */
int _sqrt_recursion(int n)
{

	return (find_sqrt(0, n));

}
/**
  * find_sqrt - Calculates the sqrt of a number
  * @i: Value
  * @n: Value
  * Return: -1.
  */

int find_sqrt(int i, int n)
{

	if (i * i == n)
		return (i);
	else if (i < n)
		{
		return (find_sqrt(i + 1, n));
		}
	else
		return (-1);

}
