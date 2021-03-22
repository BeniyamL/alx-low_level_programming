#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - insert node at a given index
 * @head: the head of the node
 * @idx: the given index
 *
 * Return: 1 for success, -1 otherwise
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t *curnode;
	listint_t *temp;
	unsigned int counter;

	counter = 0;
	curnode = (*head);
	if (head == NULL || *head == NULL)
		return (-1);
	if (idx == 0)
	{
		curnode = curnode->next;
		free(*head);
		*head = curnode;
		return (1);
	}
	while (counter < (idx - 1))
	{
		if (curnode == NULL)
		{
			return (-1);
		}
		curnode = curnode->next;
		counter++;
	}
	temp = curnode->next;
	curnode->next = temp->next;
	free(temp);
	return (1);
}
