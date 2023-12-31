#include "lists.h"

/**
  * list_len - a function that returns the number of elements in a linked list
  * @h: pointer to the first element of a list
  * Return: the number of elements
*/
size_t list_len(const list_t *h)
{
	size_t numb = 0;

	while (h)
	{
		h = h->next;
		++numb;
	}
	return (numb);
}
