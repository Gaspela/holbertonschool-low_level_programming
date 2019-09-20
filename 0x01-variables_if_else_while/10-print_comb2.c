#include <stdio.h>
/**
 * main - Print numbers from 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int one;
	int two;

	for (one = 0; one <= 9; one++)
	{
	for (two = 0; two <= 9; two++)
	{
	putchar(one + '0');
	putchar(two + '0');
	if (!(one == 9 && two == 9))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
