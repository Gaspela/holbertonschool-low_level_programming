#include "holberton.h"
/**
 * print_times_table - Prints the n times table, starting with 0.
 *
 * @n: Vaule data check
 */
void print_times_table(int n)
{

	int m;
	int t;

	if ((n > 15) || (n < 0))
		
	return;

	for (m = 0; m <= n; m++)
	{
		for (t = 0; t <= n; t++)
		{
			if ((m * t) < 10)
			{
				if (t != 0)
				{
				_putchar(' ');
					_putchar(' ');
				}
			}
			else if ((m * t) < 100)
			{
				_putchar(' ');
					_putchar(m * t / 10 + '0');
			}
			else
			{
				_putchar(m * t / 100 + '0');
					_putchar((m * t / 10) % 10 + '0');
			}
				_putchar(m * t % 10 + '0');
			if (t == n)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
					_putchar(' ');
			}
		}
	}
}
