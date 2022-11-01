#include "main.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename:the name of the file
 * @text_content:string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_RDWR | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}

	while (text_content[i])
	{
		i++;
	}
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	else
	{
		wr = write(file, text_content, i);
	}
	/*f you do not have the required permissions to write the file*/
	if (wr == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
