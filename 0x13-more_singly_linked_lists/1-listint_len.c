#include "lists.h"
/**
 *listint_len - function that prints all the elements of a listint_t list
 *@h: pointer to element of listint_t
 *Return: number of elements of the linked listint_t list
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		++i;
	}
	return (i);
}
