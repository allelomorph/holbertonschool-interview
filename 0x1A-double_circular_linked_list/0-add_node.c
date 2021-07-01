#include "list.h"

/* malloc */
#include <stdlib.h>
/* strdup */
#include <string.h>


/**
 * add_node_end - TBD
 *
 * @list: double pointer to head of doubly circular DLL
 * @str: string to copy
 * Return: TBD
 */
List *add_node_end(List **list, char *str)
{
	List *new, *head, *tail;
	char *str_cpy = NULL;

	if (!list)
		return (NULL);

	new = malloc(sizeof(List));
	str_cpy = strdup(str);
	if (!new || !str_cpy)
		return (NULL);
	new->str = str_cpy;
	new->next = new;
	new->prev = new;

	head = *list;

	if (head)
	{
		if (!head->prev && !head->next)
		{
			head->prev = head->next = new;
			new->prev = new->next = head;
		}
		else
		{
			tail = head->prev;

			tail->next = new;
			new->next = head;

			head->prev = new;
			new->prev = tail;
		}
	}
	else
		*list = new;

	return (new);
}

/**
 * add_node_begin - TBD
 *
 * @list: double pointer to head of doubly circular DLL
 * @str: string to copy
 * Return: TBD
 */
List *add_node_begin(List **list, char *str)
{
	List *new, *head, *tail;
	char *str_cpy = NULL;

	if (!list)
		return (NULL);

	new = malloc(sizeof(List));
	str_cpy = strdup(str);
	if (!new || !str_cpy)
		return (NULL);
	new->str = str_cpy;
	new->next = new;
	new->prev = new;

	head = *list;

	if (head)
	{
		if (!head->prev && !head->next)
		{
			head->prev = head->next = new;
			new->prev = new->next = head;
		}
		else
		{
			tail = head->prev;

			tail->next = new;
			new->next = head;

			head->prev = new;
			new->prev = tail;
		}
	}

	*list = new;
	return (new);
}
