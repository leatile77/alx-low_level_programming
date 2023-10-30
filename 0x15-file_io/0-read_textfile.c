#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - Function to read and print a file
 * @filename: file to print
 * @letters: Nummber of chars to print from filename
 *
 * Return: 0 or number of printed chars
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

ssize_t r, w;
char *print;
int o;
o = 0;

if (!filename)
{
return (0);
}

o = open(filename, O_RDONLY);

if (o == -1)
{
return (0);
}

print = malloc(sizeof(char) * letters);

if (print == NULL)
{
return (0);
}

r = read(o, print, letters);
w = write(STDOUT_FILENO, print, r);

free(print);

close(o);
return (w);
}
