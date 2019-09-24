#include "holberton.h"
/**
 * print_sign - Function that prints the sign of a number.
 * @n: Check the data return.
 * Return: 1 (+, 1) 0 (0, 0) -1 (-, /)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
			return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
			return (0);
	}
	else
	{
		_putchar('-');
			return (-1);
	}
}
