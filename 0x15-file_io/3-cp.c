#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 1024

/**
 * error_exit - prints error message and exits with specified code
 * @code: exit code
 * @msg: error message
 */
void error_exit(int code, char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rcount, wcount;
	char buf[BUFSIZE];
	mode_t perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");
		fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perms);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	do
	{
		rcount = read(fd_from, buf, BUFSIZE);
		if (rcount == -1)
			error_exit(98, "Can't read from file");
		if (rcount == 0)
			break;
		wcount = write(fd_to, buf, rcount);
		if (wcount == -1)
			error_exit(99, "Can't write to file");
	}
	while (rcount > 0);
		if (close(fd_from) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
		if (close(fd_to) == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
