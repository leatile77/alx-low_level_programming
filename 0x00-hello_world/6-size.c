#include <stdio.h>

/**
 * main - Print size of data types
 *
 * Return: 0
 */

int main(void)
{
char word;
int num;
long int num2;
long long int num3;
float decimal;

printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(word));
printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(num));
printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(num2));
printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(num3));
printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(decimal));
return (0);
}
