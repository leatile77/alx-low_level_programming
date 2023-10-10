#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function to free dogs
 * @d: Struct to free
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
