#include <stdio.h>
#include <stdarg.h>
#include "lists.h"
/**
 * get_nodeint_at_index - find node at a given index
 * @head: the head of the node
 * @index: the index to be searched
 *
 * Return: the node value at a given index
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;
	listint_t *node;

	if (head == NULL)
		return (NULL);
	counter = 0;
	while (head)
	{
		if (index == counter)
		{
			node = head;
			break;
		}
		head = head->next;
		counter++;
	}
	if (index > counter)
		return (NULL);
	return (node);
}
