#include "list.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the linkint_t list to free
 */
void free_listint2(listint_t **head)
{
	linkint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
