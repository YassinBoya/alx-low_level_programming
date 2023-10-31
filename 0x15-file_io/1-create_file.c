#include "main.h"
/**
 * create_file - creates a file.
 *@filename: file created
 *@text_content: written to file.
 *
 * Return: chars read
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (op == -1)
		return (-1);
	if (text_content == NULL)
	{
		i = 0;
	}
	else
	{
		i = 0;
		while (text_content[i] != '\0')
			i++;
	}
	if (write(fd, text_content, i) == -1)
		return (-1);
	if (close(fd) == -1)
		return (-1);
	return (1);
}
