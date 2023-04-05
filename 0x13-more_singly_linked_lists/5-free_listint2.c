#include "lists.h"
/**
 * free_listint2 - frees a listint_t list, sets head to NULL
 * @head: pointer to the head of the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		hold = *head;
		*head = (*head)->next;
		free(hold);
	}
	*head = NULL;
}
