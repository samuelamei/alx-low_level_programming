#include "main.h"
#include <stdlib.h>

/**
 * a function that reads a text file and prints it to the POSIX standard output.
 */
 
ssize_t read_textfile(const char *filename, size_t letters)
{
char *ptr;
ssize_t fd;
ssize_t a;
ssize_t b;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

ptr = malloc(sizeof(char) * letters);
b = read(fd, ptr, letters);
a = write(STDOUT_FILENO, ptr, b);

free(ptr);
close(fd);
return (a);
}

