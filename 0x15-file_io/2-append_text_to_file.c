#include "main.h"
/**
 *append_text_to_file - appends text at end of a file
 *@filename: path to file
 *@text_content: string to add to the end of the file
 *Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrote, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	wrote = write(fd, text_content, len);

	if (fd == -1 || wrote == -1)
		return (-1);

	close(opened);
	return (1);
}
