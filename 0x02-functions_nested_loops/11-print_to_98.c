#include "homberton.h"
/**
 * print_to_98 -  Prints all natural numbers.
 * @n: Value data
 *
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
	{
			printf("%d, ", n);
			n++;
	}
	}
	else if (n > 98)
	{
		while (n > 98)
	{
			printf("%d, ", n);
			n--;
	}
	}

	printf("98\n");
}
