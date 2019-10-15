#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"
/**
 * main - Add positive numbers.
 * @argc: Number of arg.
 * @argv: Arguments.
 * Return: 1 and 0.
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
				return (1);
		}
	}

	printf("%u\n", sum);

		return (0);
}
/**
 * is_positive_number - Check string only number.
 * @num: Value check string.
 * Return: 1 Only digit, 0.
 */
int is_positive_number(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
		{
		if (!isdigit(num[i]))
			return (0);
		}

		return (1);
}
