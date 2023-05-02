#include "lists.h"
/**
 * get_nodeint_at_index - gets node at given index
 * @head: list pointer
 * @index: node position
 * Return: returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	int i = 0;

	if (head)
	{
		temp = head;
		while (i++ < index)
			temp = temp->next;
	}
	return (temp);
}
