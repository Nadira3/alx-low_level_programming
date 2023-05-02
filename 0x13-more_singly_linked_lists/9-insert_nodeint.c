#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at the given index
 * @head: pointer to list pointer
 * @idx: index
 * @n: number to be copied into node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = NULL, *temp2 = NULL;
	listint_t *newNode = NULL;
	unsigned int i = 0;

	if (head)
	{
		if (*head)
		{
			newNode = malloc(sizeof(listint_t));
			if (!newNode)
				return (newNode);
			temp = *head;
			while (i++ < idx - 1)
				temp = temp->next;
			temp2 = temp->next;
			newNode->n = n;
			newNode->next = temp2;
			temp->next = newNode;
		}
	}
	return (newNode);
}
