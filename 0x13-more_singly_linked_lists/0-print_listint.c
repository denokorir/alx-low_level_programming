#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_printed = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_printed++;
	}
	return (nodes_printed);
}
