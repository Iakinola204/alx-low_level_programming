#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - main
 *@d: main
 * Description: main
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
