#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that free memory allocated for linked list
 * @head: the head of the linked list
 *
 * Return: nothing
 **/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		(*head) = temp;
	}
}
