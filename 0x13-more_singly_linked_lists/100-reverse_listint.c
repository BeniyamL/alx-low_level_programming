#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - function to reverse elements of a single linked list
 * @head: the head of the linked list
 *
 * Return: the head of the reversed list
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	prev = *head;
	next = (*head)->next;
	prev->next = NULL;
	while (next)
	{
		*head = next;
		next = next->next;
		(*head)->next = prev;
		prev = *head;
	}
	return (*head);
}
