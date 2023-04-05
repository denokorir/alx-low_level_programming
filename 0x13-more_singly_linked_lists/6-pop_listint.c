#include "lists.h"
/**
 * int pop_listint - deletes the head node of a lisntint_t list
 * @head: double pointer to the head of the list
 * Return: head node list, 0 if NULL
 */
int pop_listint(listint_t **head)
{
	int list;
	listint_t *hold;

	if (*head == NULL)
		return (0);

	else
	{
		list = (*head)->n;
		hold = *head;
		*head = (*head)->next;
		free(hold);
	}
	return (list);
}
