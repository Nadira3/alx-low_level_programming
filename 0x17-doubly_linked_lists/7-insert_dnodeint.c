#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of list
 * @idx: position of node to be inserted
 * @n: data to be filled in new node
 *
 * Return: doubly linked list pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = NULL, *node = NULL, *temp;
	unsigned int i = 0;

	if (!h)
		return (0);
	if (!idx)
		*h = add_dnodeint(h, (const int)n);
	else
	{
		node = malloc(sizeof(dlistint_t));
		if (!node)
			return (0);
		ptr = *h;
		while (i < idx - 1)
		{
			if (!ptr)
				break;
			ptr = ptr->next;
			i++;
		}
		if (ptr)
		{
			node->n = n;
			node->next = ptr->next;
			ptr->next = node;
			node->prev = ptr;
			temp = node;
			temp = temp->next;
			if (temp)
				temp->prev = node;
		}
	}
	return (node);
}
