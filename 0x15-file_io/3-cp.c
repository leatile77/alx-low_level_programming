#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFF_SIZE 1024

/**
 * main - Program copies content from a file to another / cp f1 f2
 * @argc: Number of arguments passed  (must always be 3)
 * @argv: Arguments passed
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
int file_from, file_to, close_err;
char buff[BUFF_SIZE];
ssize_t charRead, w;
charRead = 1024;

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}

file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
while (charRead == 1024)
{
charRead = read(file_from, buff, BUFF_SIZE);
if (charRead == -1 || file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
w = write(file_to, buff, charRead);
if (file_to == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

close_err = close(file_from);
if (close_err == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);

close_err = close(file_to);
if (close_err == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
exit(100);

return (0);
}
