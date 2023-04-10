#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
int x = 0, file;
if (filename == NULL)
return (-1);

if (text_content == NULL)
text_content = "";


while (text_content[x] != '\0')
{
x++;
}
file = open(filename, O_WRONLY | O_APPEND | O_CREAT, S_IRUSR | S_IWUSR);

if (file == -1)
return (-1);

write(file, text_content, x);
return (1);
}
