#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * @head: A pointer the head of the linked list.
 * @number: The number to insert.
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new_nodes;

	new_nodes = malloc(sizeof(listint_t));
	if (new_nodes == NULL)
		return (NULL);
	new_nodes->n = number;

	if (node == NULL || node->n >= number)
	{
		new_nodes->next = node;
		*head = new_nodes;
		return (new_nodes);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	new_nodes->next = node->next;
	node->next = new_nodes;

	return (new_nodes);
}
