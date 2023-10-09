#include "dog.h"

/**
 * init_dog - Initializes struct dog
 * @d: Struct to initialize
 * @name: name member initializer
 * @age: age member initializer
 * @owner: owner member initializer
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
