#include "lists.h"
/**
 * sum_listint - funds the sum of all the values in a linked list
 * @head: pointer to linked list
 * Return: total sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = NULL;
	int sum_int = 0;

	if (head)
	{
		temp = head;
		while (temp)
		{
			sum_int += temp->n;
			temp = temp->next;
		}
		return (sum_int);
	}
	return (sum_int);
}
