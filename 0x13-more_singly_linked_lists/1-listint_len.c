#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - function that prints element of a list
 * @h: the head of the singly linked list
 *
 * Return: the number of nodes in a list
 **/
size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
