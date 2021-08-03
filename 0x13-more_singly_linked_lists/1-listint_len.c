#include "lists.h"

/**
*listint_len - retur all the elements of a
* list
*@h: a listint_h list
*Return - Always(count) (success)
*/
size_t listint_len(const listint_t *h)
{
	size_t count;
	for(count = 0; h; i++)
	{
		h = h->next;
	}
	return (count);
}
