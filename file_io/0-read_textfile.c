#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
/**
* read_textfile - reads a file and prints to stdout
*
* @filename: name of the file to be read
*
* @letters: number of letters to be printed from the file
*
* Return: number of characters printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, i;
	char *tmp;
	ssize_t ret;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
	return (-1);
	}
	tmp = malloc(letters);
	if (tmp == NULL)
	{
	return (-1);
	}
	r = read(fd, tmp, letters);
	if (r == -1)
	{
		free(tmp);
		return (-1);
	}
	ret = r;
	i = write(STDOUT_FILENO, tmp, r);
	if (i == -1)
	{
		free(tmp);
		return (-1);
	}
	free(tmp);
	return (ret);
}
