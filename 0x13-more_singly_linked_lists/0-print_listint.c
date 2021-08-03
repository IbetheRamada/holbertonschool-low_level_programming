#include "lists.h"

/**
*print_listint - print all the elements of a
* list
*@h: a listint_h list
*Return: Always(count) (success)
*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
