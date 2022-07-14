#include "lists.h"
#include <string.h>
/**
 *add_node_end - adds new node at end of list
 *@head: pointer the header
 *@str: string to be added
 *
 *
 *Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *temp;
	unsigned int i;
	list_t *new, *last;

	temp = strdup(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(new);
		return (NULL);

	}

	i = 0;

	while (str[i] != '\0')
		i++;
	new->str = temp;
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;

	}
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;

		last->next = new;

	}

	return (*head);

}
