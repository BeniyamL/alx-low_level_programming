#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * find_listint_loop - function to detect a loop in linked list
 * @head: the head of the linked loop
 *
 * Return: the address the node where the loop start
 **/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	slow = head->next;
	fast = (head->next)->next;
	if (head == NULL || head->next == NULL)
		return (NULL);
	if (head == head->next)
		return (head);
	while (slow != NULL)
	{
		if (fast == slow)
		{
			slow = head;
			while (fast != slow)
			{
				fast = fast->next;
				slow = slow->next;
			}
			return (slow);
		}
		fast = (fast->next)->next;
		slow = slow->next;
	}
	return (NULL);
}
