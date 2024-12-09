#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
*
* @filename: the name of the file to be read.
*
* @letters: the number of letters to be printed from the file.
*
* Return: the number of characters read and printed.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tmp;

	int opn;

	ssize_t rd, wr;

	if (!filename || letters == 0)
	{
		return (0);
	}
	tmp = malloc(sizeof(char) * letters);
	if (!tmp)
	{
		return (0);
	}
	opn = open(filename, O_RDONLY);
	if (opn == -1)
	{
		free(tmp);
		return (0);
	}
	rd = read(opn, tmp, letters);
	if (rd == -1)
	{
		free(tmp);
		close(opn);
		return (0);
	}
	wr = write(STDOUT_FILENO, tmp, rd);
	if (wr == -1)
	{
		free(tmp);
		close(opn);
		return (0);
	}
	free(tmp);
	close(opn);

	return (rd);
}
