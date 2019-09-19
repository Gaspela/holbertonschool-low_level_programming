#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * neg_pov - desc
 * @number: The number to be checked
 */
void neg_pov(int number)
{
	if (number > 0)
	printf("%d is positive\n", number);
	else if (number == 0)
	printf("%d is zero\n", number);
	else
	printf("%d is negative\n", number);
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
	neg_pov(n);
	return (0);
}
