#include "lists.h"
/**
 *get_nodeint_at_index - locate a node
 *@head: pointer to head
 *@index:is the index of the node, starting at 0
 *Return: returns the nth node of a listint_t or NULL if not
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;

	}

	return (head);

}
