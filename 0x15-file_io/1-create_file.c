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
	int opFile, wrFile, closeFile,i;

	if (filename == NULL)
		return (-1);
	opFile = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (opFile == -1)
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
	wrFile = write(opFile, text_content, i);
	if (wrFile == -1)
		return (-1);
	closeFile = close(opFile);
	if (closeFie == -1)
		return (-1);
	return (1);
}
