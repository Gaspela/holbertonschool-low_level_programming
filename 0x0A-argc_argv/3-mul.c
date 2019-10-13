#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiply two numbers.
 * @argc: Number of command line arguments.
 * @argv: Command line arguments.
 * Return: 0 Check and 1 Not two argc.
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
			return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

		return (0);

}
