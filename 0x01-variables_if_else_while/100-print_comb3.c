#include <stdio.h>
/**
 * main - Advanced combinations of two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int one;
	int two;

	for (one = 0; one <= 9; one++)
	{
	for (two = one + 1; two <= 9; two++)
	{
	putchar(one + '0');
	putchar(two + '0');
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
