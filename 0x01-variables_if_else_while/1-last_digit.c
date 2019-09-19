#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * ldigit - desc
 *
 * @num: The number to be checked
 */
void ldigit(int num)
{
	int last;
	last = num;
	do {
	last %= 10;
	} while ((last >= 10) || (last <= -10));
	printf("Last digit of %i is %i and ", num, last);
	if (last > 5)
	printf("is greater than 5\n");
	else if (last == 0)
	printf("is 0\n");
	else
	printf("is less than 6 and not 0\n");

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
