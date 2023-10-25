#include "lists.h"
/**
 *free_listint2 - a function that frees a listint_t list
 *@head: head of a listint_t list
*/
void free_listint2(listint_t **head)
{
	listint_t *pre;

	if (head == NULL)
		return;
	while (*head)
	{
		pre = *head;
		*head = (*head)->next;
		free(pre);
	}
}
