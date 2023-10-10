#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Function that creates a new dog
 * @name: Name of the new dog
 * @age: age of the new dog
 * @owner: Name of the owner of new dog
 *
 * Return: newDog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int i, j, x1, x2;
dog_t *newDog;

if (name == NULL || owner == NULL)
{
return (NULL);
}

newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}

for (i = 0; name[i]; i++)
{
;
}
i++;
newDog->name = malloc(sizeof(char) * i);

if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}
for (x1 = 0; x1 < i; x1++)
{
newDog->name[x1] = name[x1];
}

newDog->age = age;

for (j = 0; owner[j]; j++)
{
;
}
j++;
newDog->owner = malloc(sizeof(char) * j);

if (newDog->owner == NULL)
{
free(newDog->owner);
free(newDog);
return (NULL);
}
for (x2 = 0; x2 < j; x2++)
{
newDog->owner[x2] = owner[x2];
}
return (newDog);
}
