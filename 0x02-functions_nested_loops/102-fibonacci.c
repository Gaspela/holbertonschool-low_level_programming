#include <stdio.h>
/**
 * main - Print the first 50 Fibonacci numbers, starting 1,2
 *
 * Return: (0)
 */
int main(void)
{
	int n;
	long lst[50];
	

	fib[0] = 1;
	fib[1] = 2;

	for (n = 2; n < 50; n++)
	{
		lst[n] = lst[n - 1] + lst[n - 2];
	}
	for (n = 0; n < 49; n++)
	{
		printf("%li, ", lst[n]);
	}
	printf("%li\n", lst[n]);
	return (0);
}
