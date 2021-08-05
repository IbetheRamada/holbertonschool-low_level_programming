#include "lists.h"

/**
*free_listint - free list
*@head: a listint_h list
*@n: a const int
*Return: Always(*head) (success)
*/
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_listint(head->next);
	free(head);
}
