#include <stdio.h>
/**
 * main - Advanced combinations of three digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int one;
	int two;
	int three;

	for (one = 0; one <= 9; one++)
	{
	for (two = one + 1; two <= 9; two++)
	{
	for (three = two + 1; three <= 9; three++)
	{
	putchar(one + '0');
	putchar(two + '0');
	putchar(three + '0');
	if (one < 7)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
