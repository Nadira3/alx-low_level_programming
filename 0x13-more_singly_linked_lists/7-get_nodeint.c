#include "lists.h"
/**
 * listint_len - finds the number of elements in a list
 * @h: pointer to list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h)
	{
		while (h)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
/**
 * get_nodeint_at_index - gets node at given index
 * @head: list pointer
 * @index: node position
 * Return: returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = NULL;
	unsigned int i = 0;

	if (head)
	{
		if (index > listint_len(head))
			return (NULL);
		temp = head;
		while (i++ < index)
			temp = temp->next;
	}
	return (temp);
}
