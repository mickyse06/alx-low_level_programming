#include "lists.h"
#include <string.h>
/**
 *add_node - adds a new node at statrt
 *@head: pointer to head of the node
 *@str: string to be added
 *
 *Return: NULL if fails, or address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *temp;
	unsigned int i;
	list_t *new;

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
	new->next = *head;

	*head = new;

	return (new);

}
