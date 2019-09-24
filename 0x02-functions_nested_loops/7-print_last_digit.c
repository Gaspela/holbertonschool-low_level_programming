#include "holberton.h"
/**
  * print_last_digit - Prints the last digit of a number.
  * @n: Check value data
  *	Return: lst
 */
int print_last_digit(int n)
{

	int lst;

	lst = n % 10;

	if (n < 0)
	lst = -lst;
	_putchar(lst + '0');
		return (lst);
}
