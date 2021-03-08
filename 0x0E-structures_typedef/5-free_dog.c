#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that free a memory of dog
 * @d: the structure to be free
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
if (d->name != NULL)
{
free(d->name);
}
if (d->owner != NULL)
{
free(d->owner)
}
free(d);
}
