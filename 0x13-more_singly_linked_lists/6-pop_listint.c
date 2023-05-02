#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to a list pointer
 * Return: value in head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int n = 0;

	if (!*head)
		return (n);
	temp = *head;
	n = temp->n;
	*head = temp->next;
	return (n);
}
