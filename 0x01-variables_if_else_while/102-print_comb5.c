#include <stdio.h>

/**
 * main - All possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 100; n++)
	{
	for (m = 0; m < 100; m++)
	{
	if ((n == 0 && m != 0) || (m > n))
	{
	putchar(n / 10 + '0');
	putchar(n % 10 + '0');
	putchar(' ');
	putchar(m / 10 + '0');
	putchar(m % 10 + '0');
	if (n < 98)
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
