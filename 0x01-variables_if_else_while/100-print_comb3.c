#include <stdio.h>
/**
 * main - Advanced combinations of two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int two;
	int one;

	for (one = 0; one <= 9; one++)
	{
	for (two = one + 1; two <= 9; two++)
	{
	putchar(two + '0');
	putchar(one + '0');
	if (one < 8)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
