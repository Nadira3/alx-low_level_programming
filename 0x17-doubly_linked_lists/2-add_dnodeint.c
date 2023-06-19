#include "lists.h"
/**
 * add_dnodeint - adds a node to the beginning of a list
 * @head: pointer to begining of the list
 * @n: data of list struct
 *
 * Return: doubly linked list pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	if (!head)
		return (0);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (0);
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	if (*head)
		(*head)->prev = node;
	*head = node;
	return (*head);
}
