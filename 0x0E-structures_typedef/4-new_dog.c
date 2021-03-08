#include "dog.h"
#include <stdlib.h>

int strlength(char *str);
char *strcopy(char *dst, char *src);

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
		free(newd);
		return (NULL);
	}
	newd->owner = malloc((strlength(owner) + 1) * sizeof(char));
	if (newd->owner == NULL)
	{
		free(newd->name);
		free(newd);
		return (NULL);
	}
	newd->name = strcopy(newd->name, name);
	newd->age =  age;
	newd->owner =  strcopy(newd->owner, owner);
	return (newd);
}
/**
 * strcopy - function copy source string to destination
 * @src: the source string
 * @dst: the destrinatin string
 *
 * Return: the copied string
 */
char *strcopy(char *dst, char *src)
{
	int i = 0;

	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
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
