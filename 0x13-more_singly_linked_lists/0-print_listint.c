#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_listint - prints all the elements of a listint_t list
 *@h:a pointer to the header
 *
 *Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t ele = 0;

	while (h != NULL)
	{
		ele++;
		printf("%d\n", h->n);
		h = h->next;

	}

	return (ele);

}
