#include "lists.h"
/**
 *free_listint - a function that frees a listint_t list
 *@head: head of a listint_t list
*/
void free_listint(listint_t *head)
{
	listint_t *pre;

	while (head)
	{
		pre = head;
		head = head->next;
		free(pre);
	}
}
