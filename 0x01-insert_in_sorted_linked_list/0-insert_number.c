#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: double pointer to first node in list
 * @number: int to store in new node
 * Return: pointer to new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new = NULL, *temp = NULL;

	/* init new node */
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = number;

	/* insert at head if no head or less than head */
	if (!(*head) || (*head)->n > number)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		temp = *head;

		while (temp->next && temp->next->n < number)
			temp = temp->next;

		new->next = temp->next;
		temp->next = new;
	}

	return (new);

}
