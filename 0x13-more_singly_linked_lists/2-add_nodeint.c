#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to the head of the list
 * @n: int to be added to the new node
 * Return: address of the new element, NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	else
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
