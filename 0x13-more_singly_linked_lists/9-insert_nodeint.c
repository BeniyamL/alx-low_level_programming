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
	unsigned int counter;

	if (*head == NULL && head == NULL)
		return (NULL);
	counter = 0;
	prevnode = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = prevnode;
		*head = newnode;
		return (newnode);
	}
	while (prevnode)
	{
		if (counter == idx - 1)
		{
			newnode->next = prevnode->next;
			prevnode->next = newnode;
			return (newnode);
		}
		prevnode = prevnode->next;
		counter++;
	}
	free(newnode);
	return (NULL);
}
