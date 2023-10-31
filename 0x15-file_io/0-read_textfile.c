#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: the pointer to the file name
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters) {
	int fd;
	ssize_t bytes_read = 0;
	char buf[READ_BUF_SIZE];

	if (!filename || letters == 0)
		return 0;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return 0;

	bytes_read = read(fd, buf, letters);
	if (bytes_read > 0)
		write(STDOUT_FILENO, buf, bytes_read);

	close(fd);
	return bytes_read;
}
