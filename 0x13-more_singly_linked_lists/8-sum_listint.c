#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *sum_listint - sum of the data
 *@head:pointer to list
 *Return:sum of the data, 0 if emoty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;

	}
	return (sum);

}
