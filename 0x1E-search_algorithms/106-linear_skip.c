#include "search_algos.h"
/**
  * linear_skip - function to find a value in a skip list
  * @list: the given linked list
  * @value: the value to be searched
  *
  * Return: the pointer to to the first node value, -1 otherwise
  */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list, *jump = list;

	if (list == NULL)
		return (NULL);
	while (jump->next && jump->n < value)
	{
		node = jump;
		if (jump->express)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n", jump->index,
									jump->n);
		}
		else
		{
			while (jump->next)
				jump = jump->next;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", node->index,
								jump->index);
	while (node)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index,
								node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}
	return (NULL);
}
