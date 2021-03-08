#ifndef dog_h
#define dog_h
/**
 * struct dog - structure to define a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Desription: structure to define a dog
 */
typedef struct dog
{
char *name;
float age;
char *owner;
}dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
#endif
