#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>
#include <stddef.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
