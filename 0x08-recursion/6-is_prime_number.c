#include "main.h"

/**
 * is_prime_number - checks for prime numbers
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */

int prime_checker(int n, int i)
{
if (n <= 1)
{
return (0);
}

if (n % i == 0 && i > 1)
{
return (0);
}

if ((n / i) < i)
{
return (1);
}

return (prime_checker(n, i + 1));
}

int is_prime_number(int n)
{
return (prime_checker(n, 1));
}
