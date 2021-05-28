#include "hash_tables.h"

/**
 * shash_table_create - function to create an ordered hash table
 * @size: the size of the array
 *
 * Return: a pointe to the newly created hashtable
 **/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h_table = NULL;
	shash_node_t **h_node = NULL;
	unsigned long int i;

	h_table = malloc(sizeof(shash_table_t));
	if (h_table == NULL)
		return (NULL);
	h_node = malloc(size * sizeof(shash_node_t *));
	if (h_node == NULL)
	{
		free(h_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		h_node[i] = NULL;
	h_table->size = size;
	h_table->array = h_node;
	h_table->shead = NULL;
	h_table->stail = NULL;
	return (h_table);
}
/**
 * shash_table_set - insert element into an ordered hash tables
 * @ht: the hash table
 * @key: key of the new element to be added
 * @value: the value of the new element to be added
 *
 * Return: 1 if it succeeded 0 otherwise
 **/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node = NULL;
	shash_node_t *cur = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	cur = ht->shead;
	while (cur)
	{
		if (strcmp(cur->key, key) == 0)
		{
			free(cur->value);
			cur->value = strdup(value);
			return (1);
		}
		cur = cur->snext;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL)
	{
		new_node->snext = NULL;
		new_node->sprev = NULL;
		ht->shead = new_node;
		ht->stail = NULL;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->snext = ht->shead;
		new_node->sprev = NULL;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		cur = ht->shead;
		while (cur->snext && strcmp(cur->snext->key, key) < 0)
			cur = cur->snext;
		new_node->snext = cur->snext;
		new_node->sprev = cur;
		cur->snext = new_node;
		if (cur->snext == NULL)
			ht->stail = new_node;
		else
			cur->snext->sprev = new_node;
	}
	return (1);
}
/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: the given hash table
 * @key: the key value to be searched
 *
 * Return: the value associated with key, Null otherwise
 **/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *cur = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	cur = ht->shead;
	while (cur && strcmp(key, cur->key) != 0)
		cur = cur->next;
	if (cur == NULL)
		return (NULL);
	return (cur->value);
}
/**
 * shash_table_print - function to print the hash table
 * @ht: the given hash table
 *
 * Return: nothing
 **/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *cur;

	if (ht == NULL)
		return;
	printf("{");
	cur = ht->shead;
	while (cur)
	{
		if (cur->snext == NULL)
			printf("'%s': '%s'", cur->key, cur->value);
		else
			printf("'%s': '%s', ", cur->key, cur->value);
		cur = cur->next;
	}
	printf("}\n");
}

