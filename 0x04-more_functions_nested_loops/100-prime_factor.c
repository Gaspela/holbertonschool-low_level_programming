#include "holberton.h"
#include <stdio.h>
/**
 * main - Prime factor of the number 612852475143.
 * Return: 0
 */
int main(void)
	{
	long int a = 612852475143;
	int n = 2;

	while (m > n)
		{
		if (m % n == 0)
			{
			m = m / n;
			n = 2;
			}
		else
			n += 1;
			}

		printf("%d\n", n);

	return (0);
}
