#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
int i, add;

if (argc < 2)
{
printf("0\n");
}

for (i = 1; i < argc; i++)
{
if (*argv[i] < 48 || *argv[i] > 57)
{
printf("Error\n");
return (1);
}

add += atoi(argv[i]);
}
if (argc > 1)
printf("%d\n", add);

return (0);
}
