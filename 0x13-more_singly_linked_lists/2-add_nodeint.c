#include "lists.h"

/**
*listint_len - retur all the elements of a
* list
*@h: a listint_h list
*Return - Always(count) (success)
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	
	return (*head);
}
