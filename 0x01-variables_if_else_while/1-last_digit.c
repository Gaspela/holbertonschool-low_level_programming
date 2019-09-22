#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * ldigit - desc
 *
 * @m: The number to be checked
 */
void ldigit(int m)
{
	int lst;

	lst = m % 10;

	if (lst > 5)
	{
	printf("Last digit of %i is %i and is greater than 5\n", m, lst);
	}
	else if (lst == 0)
	{
	printf("Last digit of %d is %d and is 0\n", m, lst);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", m, lst);
	}
}
/**
 * main - random srand rand
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit(n);
	return (0);
}
