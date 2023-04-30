#include "lists.h"
/**
 * add_nodeint-adds a new node at the beginning
 * @head:pointer to pointer
 * @n:const int
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *) malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
