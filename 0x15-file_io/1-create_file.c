#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * create_file - Function that creates and writes to file
 * @filename:  Name of file
 * @text_content: Content to write to file
 *
 * Return: -1 on fail, 1 on success
 */

int create_file(const char *filename, char *text_content)
{
int i, o, w;
i = 0;

if (!filename)
{
return (-1);
}

if (text_content == NULL)
{
text_content = "";
}

o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (o == -1)
{
return (-1);
}

while (text_content[i])
{
i++;
}

w = write(o, text_content, i);
if (w == -1)
{
return (-1);
}

close(o);
return (1);
}
