#include "holberton.h"
/**
 * read_textfile - Reads a text file and prints standard output.
 * @filename: fd.
 * @letters: Number of letters it should print.
 * Return: Number letters.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t rd;
	ssize_t wr;
	char *p;

	if (filename == NULL)
		return (0);
/**The open and crated filename and condition error**/

		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);
/**The pointer P assigned on memory for later scroll**/

	p = malloc(sizeof(char) * letters);
		if (p == NULL)
			return (0);
/**Read the Filedescription and poniter, letters**/

	rd = read(fd, p, letters);
		if (rd == -1)
			return (0);
/**Scroll pointer data read**/
	p[rd] = '\0';
/**Transfer data with the write use STDOUT_FILENO**/

	wr = write(STDOUT_FILENO, p, rd);
		if (wr == -1 || wr != rd)
			return (0);

		close(fd);

	return (wr);

}
