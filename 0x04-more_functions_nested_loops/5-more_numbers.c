#include "holberton.h"
/**
 * more_numbers - Function that prints 10 times the numbers, from 0 to 14.
 * 
 *
*/
void more_numbers(void)
{
	int n,m;

		for (n = '0'; n <= 14; n++)
			{
			for (m = '0'; m <= 9; m++)
				{
					if (m > 9)
						{
						_putchar(m / 10 + '0');
						}
				}
			}
				
			
}
