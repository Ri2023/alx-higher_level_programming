#include "lists.h"

/**
 * is_palindrom - prints all elements of listint_t list
 * @head: head
 * Return: 0 (not a palindrome), 1 (a palindrome)
 */
int is_palindrome(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (1);
	return (palind_checker(head, *head));
}

/**
 * palind_checker - checks for palindrome
 * @head: head list
 * @end: end list
 */
int palind_checker(listint_t **head, listint_t *end)
{
	if (!end)
	{
		return (1);
	}
	if (palind_checker(head, end->next) && (*head)->n == end->n)
	{
		*head = (*head)->next;
		return (1);
	}
	return (0);
}


