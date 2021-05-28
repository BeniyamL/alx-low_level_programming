#include "hash_tables.h"
/**
 * hash_table_print - function to print the hash table
 * @ht: the given hash table
 *
 * Return: nothing
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cur;
	unsigned long int i = 0;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		cur = ht->array[i];
		if (flag == 1 && cur)
			printf(", ");
		while (cur)
		{
			if (cur->next)
				printf("'%s' : '%s', ", cur->key, cur->value);
			else
				printf("'%s' : '%s'", cur->key, cur->value);
			cur = cur->next;
			flag = 1;
		}
	}
	printf("}\n");
}
