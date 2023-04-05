#include "lists.h"
/**
 * list_len - finds the number of elements in a list
 * @h: pointer to list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
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
 * add_node_end - adds node to the end of a list
 * @head: pointer to list
 * @str: string to be copied
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (new);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		if (list_len(temp) > 1)
		{
			while (temp->next)
				temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
