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

printf("Size of a char: %d byte(S)\n", (int)sizeof(word));
printf("Size of an int: %d byte(S)\n", (int)sizeof(num));
printf("Size of a long int: %d byte(S)\n", (int)sizeof(num2));
printf("Size of a long long int: %d byte(S)\n", (int)sizeof(num3));
printf("Size of a float: %d byte(S)\n", (int)sizeof(decimal));
return (0);
}
