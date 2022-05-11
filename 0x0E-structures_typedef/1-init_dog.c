#include "dog.h"
/**
 * init_dog - main
 * @d: main
 * @name: main
 * @age: main
 * @owner: main
 * Return: main
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
