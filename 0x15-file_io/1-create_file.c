 #include "main.h"

/**
 *  a function that appends text at the end of a file.
 *        
 */


int create_file(const char *filename, char *text_content) {
int ptr, s, ln = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (ln = 0; text_content[ln];)
ln++;
}

ptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
s = write(ptr, text_content, ln);

if (ptr == -1 || s == -1)
return (-1);
close(ptr);
return (1);
}

