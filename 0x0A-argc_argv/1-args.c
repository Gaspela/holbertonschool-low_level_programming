#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it.
 * @argc: Number of command line arguments.
 * @argv: Command line arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{

	(void) argv;
		printf("%d\n", argc - 1);

	return (0);

}
