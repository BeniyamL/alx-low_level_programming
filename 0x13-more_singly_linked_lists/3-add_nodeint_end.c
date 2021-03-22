#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add new node at the begenining of the list
 * @head: the head of the singly linked list
 * @n: the value given to the new node
 *
 * Return: the newnode
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *last;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
		return (newnode);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = newnode;
	newnode->next = NULL;
	return (newnode);
}
