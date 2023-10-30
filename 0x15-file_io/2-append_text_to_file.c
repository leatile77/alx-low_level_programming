#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - Function that appends text to a file
 * @filename: Name of file to append to
 * @text_content: Text to append to filename
 *
 * Return: -1 on failure, 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
int num, file_d, apnd;
num = 0;

if (filename == NULL)
{
return (-1);
}

file_d = open(filename, O_WRONLY | O_APPEND);

if (file_d == -1)
{
return (-1);
}

if (text_content)
{
while (text_content[num])
{
num++;
}

apnd = write(file_d, text_content, num);

if (apnd == -1)
{
return (-1);
}
}
close(file_d);
return (1);
}
