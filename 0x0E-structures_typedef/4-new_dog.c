#include "dog.h"
#include <stdlib.h>
/**
 * new_dog -  function that creates a new dog
 * @name: the name of a dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newd;
newd = malloc(sizeof(dog_t));
if (newd == '\0')
{
return ('\0');
}
newd->name =  name;
newd->age =  age;
ewd->owner =  owner;
return (newd);
}
