#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the given hash table
 * @key: the key value to be searched
 *
 * Return: the value associated with key, Null otherwise
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *cur = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	cur = ht->array[index];
	while (cur && strcmp(key, cur->key) != 0)
		cur = cur->next;
	if (cur == NULL)
		return (NULL);
	return (cur->value);
}
