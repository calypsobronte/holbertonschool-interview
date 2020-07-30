#include "lists.h"
/**
 * insert_node - function sorted list
 * @head: double pointer list
 * @number: value
 * Return: new node or NULL
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *tmp = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = number;

	if (*head == NULL || (*head)->n >= number)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (tmp->next && tmp->next->n < number)
		tmp = tmp->next;
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
