#include "holberton.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 * Return:
 */
void times_table(void)
{

	int n;

	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (m == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if ((n * m) < 10)
				_putchar(' ');

				else

				_putchar(n * m / 10 + '0');
				_putchar(n * m % 10 + '0');

				if (m == 9)
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
}
