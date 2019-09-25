#include <stdio.h>
/**
 * main - Print suma all natural below 10, multiples 3,5
 *
 * Return: (0)
 */
int main(void)
{

	int n;
	int sum;

	sum = 0;
	for (n = 1; n < 1024; n++)
	{
		if ((n % 5 == 0) || (n % 3 == 0))
			sum += n;
	}

	printf("%d\n", sum);

	return (0);
}
