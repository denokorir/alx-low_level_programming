#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the linked list
 * @index: index of node to return(starting at 0)
 * Return: pointer to indexed node, NULL if it fails
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; head && count < index; count++)
		head = head->next;

	return (head);
}
