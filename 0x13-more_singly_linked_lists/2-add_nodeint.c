#include "lists.h"

/**
*add_nodeint - Add a new node at the beginning of the list
*@head: a listint_h list
*@n: a const int
*Return: Always(*head) (success)
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
