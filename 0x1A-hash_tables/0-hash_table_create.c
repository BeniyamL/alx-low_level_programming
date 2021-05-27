#include "hash_tables.h"
/**
 * hash_table_create - function to create a hash table
 * @size: the size of the array
 *
 * Return: a pointe to the newly created hashtable
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table = NULL;
	hash_node_t **h_node = NULL;
	unsigned long int i;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);
	h_node = malloc(size * sizeof(hash_node_t));
	if (h_node == NULL)
	{
		free(h_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		h_node[i] = NULL;
	h_table->size = size;
	h_table->array = h_node;
	return (h_table);
}
