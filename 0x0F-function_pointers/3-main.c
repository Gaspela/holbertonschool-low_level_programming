#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - calculates two numbers and prints the result
  * @argc: number of elements in argv
  * @argv: array of elements
  * Return: result if it all works
  */
int main(int argc, char *argv[])
{
	int result;
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	result = get_op_func(argv[2])(n1, n2);
	printf("%d\n", result);
	return (0);
}
