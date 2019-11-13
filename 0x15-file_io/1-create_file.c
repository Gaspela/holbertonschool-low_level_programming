#include "holberton.h"
/**
 * create_file - Created new file.
 * @filename: fd.
 * @text_content: Value data.
 * Return: 1 or -1.
*/
int create_file(const char *filename, char *text_content)
{

	int fd;
	int i = 0;
	int wr;

	if (filename == NULL)
		return (-1);
/**Creadted filename,  file already exists, truncate it**/
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);
/**Created empity file**/
		if (text_content == NULL)
			return (1);

	while (text_content[i])
		i++;
	wr = write(fd, text_content, i);
		if (wr == -1 || wr != i)

		return (-1);
		return (1);

}
