#include "hash_tables.h"
/**
 * hash_table_delete - function to delete the hash table
 * @ht: the given hash table
 *
 * Return: nothing
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cur, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		cur = ht->array[i];
		while (cur)
		{
			tmp = cur->next;
			free(cur->key);
			free(cur->value);
			free(cur);
			cur = tmp;
		}
	}
	if (ht->array)
		free(ht->array);
	if (ht)
		free(ht);
}
