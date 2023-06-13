/*
* File: 10-check_cycle.c
* Auth: Victoria E. Iria
*/

#include <stdlib.h>
#include "lists.h"

/**
* check_cycle - Checks if the linked list contains a cycle.
* @list: the singly-linked list to check
*
* Return: 1 if the list has a cycle, 0 if it does not
*/
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;
  
	if (list == NULL || list->next == NULL)
		return (0);

	slow = list->next;
	fast = list->next->next;

	while (slow && fast && fast->next)
		{
			if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->next;
		}

		return (0);
}
