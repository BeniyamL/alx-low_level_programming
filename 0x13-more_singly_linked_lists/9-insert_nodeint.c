#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at a given index
 * @head: the head of the node
 * @idx: the given index
 * @n: the value given for new node
 *
 * Return: the address of the newnode
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *prevnode;
	listint_t *nextnode;
	unsigned int counter;

	counter = 0;
	prevnode = (*head);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		*head = newnode;
		newnode->next = prevnode;
		return (newnode);
	}
	while (counter < (idx - 1))
	{
		if (prevnode == NULL)
		{
			free(newnode);
			return (NULL);
		}
		prevnode = prevnode->next;
		nextnode = prevnode->next;
		counter++;
	}
	prevnode->next = newnode;
	newnode->next = nextnode;
	return (newnode);
}
