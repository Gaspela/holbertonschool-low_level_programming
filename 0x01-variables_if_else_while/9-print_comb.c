#include <stdio.h>
/**
 * main - Print all possible combinations of single digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	putchar(nu + '0');

	if (n < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
