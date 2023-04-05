#include "lists.h"
/**
 * free_listint - free a listint_t list
 * @head: pointer to the head of the list
 */
void free_listint_t(listint_t *head)
{
	listint_t *hold;

	while (head == NULL)
	{
		hold = head
		head = head->next;
		free(hold);
	}
}
