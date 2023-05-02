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
 * del_listint_other - deletes a node from a list at any position
 * @head: pointer to a list pointer
 * @index: position number of node to be deleted starting from zero
 * Return: value in head node
 */
void del_listint_other(listint_t *head, unsigned int index)
{
	listint_t *temp = NULL, *temp2 = NULL;
	unsigned int i = 0;

	temp = head;
	while (i++ < index - 2)
		temp = temp->next;
	temp2 = temp->next;
	free(temp->next);
	temp->next = temp2;
}
/**
 * del_listint_end - deletes the tail node of a list
 * @head: pointer to a list pointer
 * Return: value in head node
 */
void del_listint_end(listint_t *head)
{
	listint_t *temp = NULL;
	unsigned int i = 0;

	temp = head;
	while (i++ < listint_len(head) - 2)
		temp = temp->next;
	free(temp->next);
	temp->next = NULL;
}
/**
 * del_listint_beg - deletes the head node of a list
 * @head: pointer to a list pointer
 * Return: value in head node
 */
void del_listint_beg(listint_t *head)
{
	listint_t *temp = NULL;

	temp = head;
	head = head->next;
	free(temp);
}
/**
 * delete_nodeint_at_index - deletes a node at the given index
 * @head: pointer to list pointer
 * @index: position number of node to be deleted starting from zero
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL;

	temp = *head;
	if (head)
	{
		if (*head)
		{
			if (index >= listint_len(*head))
				return (-1);
			if (index == 0 && listint_len(*head) > 1)
				del_listint_beg(*head);
			else if (index == 0 && !(listint_len(*head)))
			{
				free(temp->next);
				temp->next = NULL;
			}
			else if (index == listint_len(*head) - 1)
				del_listint_end(*head);
			else
				del_listint_other(*head, index);
		}
		else
			return (-1);
	}
	return (1);
}
