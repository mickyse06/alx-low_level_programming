#include "lists.h"
#include <stdlib.h>
/**
 *listint_len - number of elements
 *@h: pointer to head of the node
 *
 *Return:  number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t ele = 0;

	while (h != 0)
	{
		ele++;
		h = h->next;

	}

	return (ele);

}
