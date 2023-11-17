#include "lists.h"

/**
 * add_node - it adds nodes at the start of a list.
 *
 * @head: the head of the singly linked list
 * @str: string for the stroage
 *
 * Return: Address of the element or node added.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i, count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdu(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
