#include "search_algos.h"
/**
  * jump_list - function to find a value in a given sinked linked list
  * @list: the pinter to the head of the list
  * @size: the size of the list
  * @value: the value to be searched
  *
  * Return: the pointer to the node containing the value, -1 otherwise
  */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t l, h;
	int jump = sqrt(size);
	listint_t *node = list;

	if (size == 0 || list == NULL)
		return (NULL);
	l = 0;
	while (l < size && list->n < value)
	{
		h = l + jump;
		node = list;
		while (l < h && list->next)
		{
			list = list->next;
			l = l + 1;
		}
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
		l = h;
	}
	l = node->index;
	printf("Value found between indexes [%ld] and [%ld]\n", l, list->index);
	for (; l <= size && node; l++)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
		if (node->next)
		{
			node = node->next;
			l = node->index;
		}
	}
	return (NULL);
}
