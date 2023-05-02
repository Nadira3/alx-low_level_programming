#include "lists.h"
/**
 * add_nodeint - adds node to the beginning of a list
 * @head: pointer to list
 * @n: number to be added
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (new);
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
