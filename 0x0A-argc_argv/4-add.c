#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Add positive numbers.
 * @argc: Number of arg.
 * @argv: Arguments.
 * Return: 1 and 0.
 */
int main(int argc, char *argv[])
{

	int sum = 0, i, n;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
		if (is_positive(argv[i]) == 0)
		{
			n = atoi(argv[i]);
			sum += n;
		}
		else
		{
		printf("Error\n");
		return (1);
		}
		}
	}
		printf("%d\n", sum);
			return (0);

}
/**
 * is_positive - Check string only number.
 * @num: Value check string.
 * Return: 1 Only digit, 0.
 */
int is_positive(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
		{
		if (!isdigit(num[i]))
			return (0);
		}

		return (1);
}
