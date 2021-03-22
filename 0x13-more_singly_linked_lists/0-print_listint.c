#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - function that prints element of a list
 * @h: the head of the singly linked list
 *
 * Return: the number of nodes in a list
 **/
size_t print_listint(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
