#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
/**
* read_textfile - lee un archivo de texto
* @filename: nombre del archivo
* @letters: cantidad de letras
* Return: el texto
*/

ssize_t read_textfile(const char *filename, size_t letters)

