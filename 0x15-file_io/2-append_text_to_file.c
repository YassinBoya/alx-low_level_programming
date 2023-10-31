#include "main.h"
/**
 *append_text_to_file - appends text at end of a file
 *@filename: path to file
 *@text_content: string to add to the end of the file
 *Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		while (text_content != '\0';)
			len++;
	}
	if (open(filename, O_WRONLY | O_APPEND) == -1
			|| write(fd, text_content, len) == -1)
		return (-1);
	close(fd);
	return (1);
}
