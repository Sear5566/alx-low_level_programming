#include "lists.h"

/**
  * free_list - a function that frees a list_t list
  * @head: pointer to beginning of the list
*/
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
