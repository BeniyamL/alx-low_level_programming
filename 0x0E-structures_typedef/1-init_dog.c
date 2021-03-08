#include "dog.h"
/**
 * init_dog - function that initialize a dog structure
 * @d: the given structure
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == '\0')
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
