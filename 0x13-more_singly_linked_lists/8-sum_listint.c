#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "lists.h"
/**
 * sum_listint - find the sum of all the data of a linked list
 * @head: the head of the node
 *
 * Return: the sum of the node
 **/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
