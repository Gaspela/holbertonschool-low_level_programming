#include "holberton.h"
/**
  * main - copies the content of a file to another file
  * @argc: number of args
  * @argv: elements of args
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int openfd1, openfd2, errormsg;
	ssize_t var_write = 0, var_read = 0;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	openfd1 = open(argv[1], O_RDONLY);
	if (openfd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	openfd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (openfd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	do
	{
		var_read = read(openfd1, buf, 1024);
		if (var_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		if (var_read)
		{
			var_write = write(openfd2, buf, var_read);
			if (var_write != var_read)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
	} while (var_read);

	errormsg = close(openfd1);
	if (errormsg == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", openfd1);
		exit(100);
	}
	errormsg = close(openfd2);
	if (errormsg == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", openfd2);
		exit(100);
	}
	return (0);
}
