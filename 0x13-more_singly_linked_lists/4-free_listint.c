#include "lists.h"
/**
 * free_listint-frees a listint_t list
 * @head:pointer to head
 */
void free_listint(listint_t *head)
{
	listint_t *next;


		while (head)
		{
			next = head->next;
			free(head);
			head = next;
		}
}
