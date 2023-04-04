
#include "lists.h"
/**
 * add_node - adds node to the beginning of a list
 * @head: pointer to list
 * @str: string to be copied
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (new);
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = *head;
		*head = new;
	}
	return (new);
}
