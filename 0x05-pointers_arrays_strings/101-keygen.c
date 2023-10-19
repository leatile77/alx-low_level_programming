#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Generates random valid passwords
 *
 * Return: 0
 */

int main(void)
{
char passwrd[84];
int i, sum, half_1, half_2;
i = 0;
sum = 0;

    srand(time(0));

    while (sum < 2772)
    {
        passwrd[i] = 33 + rand() % 94;
        sum = sum + passwrd[i++];
    }

    passwrd[i] = '\0';

    if (sum != 2772)
    {
        half_1 = (sum - 2772) / 2;
        half_2 = (sum - 2772) / 2;

        if ((sum - 2772) % 2 != 0)
        {
            half_1++;
        }

        for (i = 0; passwrd[i]; i++)
        {
            if (passwrd[i] >= (33 + half_1))
            {
                passwrd[i] = passwrd[i] - half_1;
                break;
            }
        }

        for (i = 0; passwrd[i]; i++)
        {
            if (passwrd[i] >= (33 + half_2))
            {
               passwrd[i] = passwrd[i] - half_2;
               break;
            }
        }

    }

    printf("%s", passwrd);
    return (0);
}
