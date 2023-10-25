#include "lists.h"
/**
 *add_nodeint_end - function that adds a new node at the end of a listint_t list.
 *@head: head of the listint_t list.
 *@n: new element in the listint_t list.
 *Return: the address of the new element, or NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *pre = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (pre == NULL)
	{
		*head = new;
		return (new);
	}
	while (pre->next)
		pre = pre->next;
	pre->next = new;
	return (new);
}
