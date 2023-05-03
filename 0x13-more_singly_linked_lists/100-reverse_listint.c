#include "lists.h"
/**
 * rev - reverses a linked list
 * @head: pointer to list pointer
 * Return: a pointer to the first node of the reversed list
 */
listint_t *rev(listint_t *head)
{
	listint_t *temp = NULL, *temp2 = NULL;
	
	if (head)
	{
		while (head != NULL)
		{
			temp2 = head->next;
			head->next = temp;
			temp = head;
			head = temp2;
		}
		head = temp;
	}
		return (head);
}
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to list pointer
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	if (head)
	{
		if (*head != NULL)
		{
			*head = rev(*head);
			return (*head);
		}
		else
			return (NULL);
	}
	return (NULL);
}
