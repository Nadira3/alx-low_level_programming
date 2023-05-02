#include "lists.h"
/**
 * add_nodeint - adds node to the beginning of a list
 * @head: pointer to list
 * @n: number to be added
 * Return: pointer to new node
 */
listint_t *insert_nodeint(listint_t **head, const int n)
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
/**
 * add_nodeint_end - adds node to the end of a list
 * @head: pointer to list
 * @n: number to be added
 * Return: pointer to new node
 */
listint_t *insert_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (new);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
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
 * insert_nodeint_at_index - inserts a node at the given index
 * @head: pointer to list pointer
 * @idx: index
 * @n: number to be copied into node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = NULL;
	listint_t *temp = NULL, *temp2 = NULL;
	unsigned int i = 0;

	if (*head)
	{
		if (idx > listint_len(*head))
			return (NULL);
		newNode = malloc(sizeof(listint_t));
		if (!newNode)
			return (NULL);
		if (!idx)
			newNode = insert_nodeint(head, n);
		else if (idx == listint_len(*head))
			newNode = insert_nodeint_end(head, n);
		else
		{
			temp = *head;
			while (++i < idx)
				temp = temp->next;
			temp2 = temp->next;
			newNode->n = n;
			newNode->next = temp2;
			temp->next = newNode;
		}
	}
	return (newNode);
}
