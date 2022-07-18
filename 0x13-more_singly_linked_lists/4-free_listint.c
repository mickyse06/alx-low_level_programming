#include "lists.h"
/**
 *free_listint - frees a listint_t list
 *@head: pointer to head
 *
 *Return: nothing
 *
 */
void free_listint(listint_t *head)
{

	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;

	}

}
