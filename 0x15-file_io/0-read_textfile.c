#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: the file to be read
 * @letters: the number of letters it should read and
 * print the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * 0. if filename is NULL and does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	/*Open the fd filename, in read only mode. */
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	/*Allocate memory a char buffer of size length+1.*/
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
	{
		return (0);
	}
	/* To Read length characters into the buffer, inserts a
	 * null character (\0) in the last position,
	 * close the file and return a pointer to the buffer.*/
	rd = read(fd, buffer, letters);
	/*if fail to read the letters/length*/
	if (rd == -1)
	{
		return (0);
	}
	buffer[letters] = '\0';

	wr = write(1, buffer, rd);
	if (wr == -1)
	{
		return (0);
	}
	close(fd);
	free(buffer);
	return (wr);
}
