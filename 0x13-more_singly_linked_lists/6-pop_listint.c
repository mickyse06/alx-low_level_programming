#include "lists.h"
/**
 *pop_listint - that deletes the head node of a listint_t
 *@head: pointer to header
 *
 *Return: the head node’s data (n). list is empty return 0
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);

	temp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (ret);

}
