#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_written, total_read = 0;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	while ((num_read = read(fd, buf, letters)) > 0 && total_read < (ssize_t)letters)
	{
		num_written = write(STDOUT_FILENO, buf, num_read);
		if (num_written != num_read)
		{
			free(buf);
			close(fd);
			return (0);
		}
		total_read += num_read;
	}

	free(buf);
	close(fd);

	return (total_read);
}
