#include "dog.h"
#include <stdlib.h>

int strlength(char *str);

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

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	newd = malloc(sizeof(dog_t));
	if (newd == NULL)
	{
		return (NULL);
	}
	newd->name = malloc((strlength(name) + 1) * sizeof(char));
	if (newd->name == NULL)
	{
		free(newd->name);
		return (NULL);
	}
	newd->owner = malloc((strlength(owner) + 1) * sizeof(char));
	if (newd->owner == NULL)
	{
		free(newd->owner);
		free(newd->name);
		return (NULL);
	}
	newd->name =  name;
	newd->age =  age;
	newd->owner =  owner;
	return (newd);
}
/**
 * strlength - function that finds the length of a string
 * @str: the given string
 *
 * Return: return the length of a string
 */
int strlength(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
